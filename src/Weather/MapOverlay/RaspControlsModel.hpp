// SPDX-License-Identifier: GPL-2.0-or-later
// Copyright The XCSoar Project

#pragma once

<<<<<<< HEAD
#include "ControlsModel.hpp"

#include <memory>

namespace WeatherMapOverlay {

class RaspControlsModel final : public ControlsModel {
  unsigned last_quarter = unsigned(-1);

public:
  void OnShow() noexcept override;

  void FormatPrimaryLabel(StaticString<64> &text) const noexcept override;
  void FormatSecondaryLabel(StaticString<64> &text) const noexcept override;

  [[nodiscard]]
  bool HasPrimaryData() const noexcept override;
  [[nodiscard]]
  bool HasSecondaryData() const noexcept override;
=======
#include "util/StaticString.hxx"

namespace WeatherMapOverlay {

class RaspControlsModel {
public:
  void OnShow() noexcept;
  void SyncFromPageLayout() noexcept;

  void SetTime(unsigned minute_of_day) noexcept;
>>>>>>> upstream/feature/weather-cursor-bar

  [[nodiscard]]
  bool StepPrimary(int delta) noexcept override;
  [[nodiscard]]
  bool StepSecondary(int delta) noexcept override;

<<<<<<< HEAD
  [[nodiscard]]
  bool GetPrimaryAutoAdvance() const noexcept override;
  void SetPrimaryAutoAdvance(bool auto_advance) noexcept override;
  void ApplyPrimaryAutoAdvance() noexcept override;
  void EnablePrimaryAutoFromInput() noexcept override;

  [[nodiscard]]
  PrimaryLabelAction GetPrimaryLabelAction() const noexcept override;

  [[nodiscard]]
  SecondaryLabelAction GetSecondaryLabelAction() const noexcept override;

  void OpenPrimaryPicker() noexcept override;
  void ResumePrimaryAuto() noexcept override;
  void OpenSecondaryPicker() noexcept override;

  void RefreshOverlay() noexcept override;
  void OnGPSUpdate(const MoreData &basic) noexcept override;
=======
  void SetTimeAutoAdvance(bool auto_advance) noexcept;
  void ApplyAutoAdvanceTime() noexcept;
  void ResumeAutoAdvance() noexcept;

  bool StepTime(int delta) noexcept;
  void FormatTimeLabel(StaticString<64> &text) const noexcept;

  bool StepField(int delta) noexcept;
  void SelectField(unsigned field_index) noexcept;
  void FormatFieldLabel(StaticString<64> &text) const noexcept;

  [[gnu::pure]]
  bool HasTimeData() const noexcept;

  [[gnu::pure]]
  bool HasFieldData() const noexcept;
>>>>>>> upstream/feature/weather-cursor-bar
};

} // namespace WeatherMapOverlay

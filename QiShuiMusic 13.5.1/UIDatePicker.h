@interface UIDatePicker : UIControl
@property (nonatomic) _UIDatePickerStyle _style;
@property (nonatomic) _UIDatePickerOverlayPresentation _overlayPresentation;
@property (nonatomic) double timeInterval;
@property (nonatomic) BOOL _displaysTimeZone;
@property (nonatomic) <_UIDatePickerCompactStyleDelegate> _compactStyleDelegate;
@property (nonatomic) NSDictionary _overrideCompactTextAttributes;
@property (nonatomic) BOOL usesBlackChrome;
@property (nonatomic) BOOL drawsBackground;
@property (nonatomic) BOOL useCurrentDateDuringDecoding;
@property (nonatomic) BOOL _roundsToMinuteInterval;
@property (nonatomic) BOOL allowsZeroCountDownDuration;
@property (nonatomic) BOOL allowsZeroTimeInterval;
@property (nonatomic) NSDate dateUnderSelectionBar;
@property (nonatomic) UIColor highlightColor;
@property (nonatomic) UIColor textColor;
@property (nonatomic) UIColor textShadowColor;
@property (nonatomic) UIColor magnifierLineColor;
@property (nonatomic) double contentWidth;
@property (nonatomic) BOOL isTimeIntervalMode;
@property (nonatomic) {UIEdgeInsets=dddd} _appliedInsetsToEdgeOfContent;
@property (nonatomic) BOOL _selectionBarIgnoresInset;
@property (nonatomic) NSString customFontDesign;
@property (nonatomic) q datePickerMode;
@property (nonatomic) NSLocale locale;
@property (nonatomic) NSCalendar calendar;
@property (nonatomic) NSTimeZone timeZone;
@property (nonatomic) NSDate date;
@property (nonatomic) NSDate minimumDate;
@property (nonatomic) NSDate maximumDate;
@property (nonatomic) double countDownDuration;
@property (nonatomic) q minuteInterval;
@property (nonatomic) q preferredDatePickerStyle;
@property (nonatomic) q datePickerStyle;
@property (nonatomic) BOOL roundsToMinuteInterval;
- (id)rac_newDateChannelWithNilValue:;
- (void)setCalendar:;
- (unsigned long long)_controlEventsForActionTriggered;
- (int)minute;
- (int)hour;
- (void)_populateArchivedSubviews:;
- (void)setLocale:;
- (void)setTimeZone:;
- (void)layoutMarginsDidChange;
- (id)calendar;
- (BOOL)_contentHuggingDefault_isUsuallyFixedHeight;
- (id)dateComponents;
- (void)setBackgroundColor:;
- (id)_intrinsicSizeWithinSize:;
- (void)_setTextColor:;
- (void)setFrame:;
- (id)_style;
- (void)awakeFromNib;
- (void)setDelegate:;
- (int)second;
- (void)_setDrawsBackground:;
- (id)locale;
- (id)initWithCoder:;
- (void)setContentHorizontalAlignment:;
- (id)hitTest:withEvent:;
- (void)invalidateIntrinsicContentSize;
- (id)_textColor;
- (id)date;
- (id)initWithFrame:;
- (void)traitCollectionDidChange:;
- (BOOL)becomeFirstResponder;
- (void)encodeWithCoder:;
- (void)setTimeInterval:;
- (double)timeInterval;
- (id)sizeThatFits:;
- (void)setBounds:;
- (void)setEnabled:;
- (void).cxx_destruct;
- (BOOL)_drawsBackground;
- (BOOL)_contentHuggingDefault_isUsuallyFixedWidth;
- (void)setDate:;
- (void)_registerObservers;
- (id)timeZone;
- (id)_systemDefaultFocusGroupIdentifier;
- (BOOL)resignFirstResponder;
- (long long)minuteInterval;
- (void)setMinuteInterval:;
- (void)setRoundsToMinuteInterval:;
- (BOOL)roundsToMinuteInterval;
- (BOOL)_roundsToMinuteInterval;
- (long long)datePickerStyle;
- (id)_overlayPresentation;
- (id)_customFontDesign;
- (void)_emitValueChanged;
- (id)_highlightColor;
- (id)minimumDate;
- (void)setMinimumDate:;
- (id)maximumDate;
- (void)setMaximumDate:;
- (BOOL)_displaysTimeZone;
- (double)_contentWidth;
- (void)_datePickerReset:;
- (void)_todayChanged:;
- (void)_setHidesLabels:;
- (BOOL)_isTimeIntervalMode;
- (void)_setHighlightsToday:;
- (BOOL)_allowsZeroCountDownDuration;
- (void)_setAllowsZeroCountDownDuration:;
- (BOOL)_allowsZeroTimeInterval;
- (void)_setHighlightColor:;
- (id)_textShadowColor;
- (void)_setTextShadowColor:;
- (id)_magnifierLineColor;
- (void)_setMagnifierLineColor:;
- (void)_setUpInitialValues;
- (void)_updatePickerViewIfNecessary;
- (void)_installPickerView:updatingSize:;
- (long long)datePickerMode;
- (void)setDatePickerMode:;
- (double)countDownDuration;
- (void)setCountDownDuration:;
- (void)setDate:animated:;
- (void)setPreferredDatePickerStyle:;
- (void)_setRoundsToMinuteInterval:;
- (BOOL)_selectionBarIgnoresInset;
- (void)_setSelectionBarIgnoresInset:;
- (void)_setCustomFontDesign:;
- (id)_appliedInsetsToEdgeOfContent;
- (BOOL)_useCurrentDateDuringDecoding;
- (void)_setUseCurrentDateDuringDecoding:;
- (void)_workaround66574039_updateLayoutMargins;
- (void)_emitBeginEditing;
- (void)_emitEndEditing;
- (void)_setCompactStyleDelegate:;
- (id)_compactStyleDelegate;
- (void)_compactStyleSetActiveComponent:;
- (id)_overrideCompactTextAttributes;
- (void)_setOverrideCompactTextAttributes:;
- (void)_setDisplaysTimeZone:;
- (id)_dateUnderSelectionBar;
- (void)_setAllowsZeroTimeInterval:;
- (id)_selectedTextForCalendarUnit:;
- (id)_labelTextForCalendarUnit:;
- (id)_lastSelectedDateComponents;
- (void)_setUsesBlackChrome:;
- (BOOL)_usesBlackChrome;
- (void)setDateComponents:;
- (void)setStaggerTimeIntervals:;
- (void)setHighlightsToday:;
- (void)setDate:animate:;
- (long long)preferredDatePickerStyle;
- (void)set_overlayPresentation:;
- (void)_performScrollTest:withIterations:rowsToScroll:inComponent:;
+ (void)_prepareStyleStorageIfNecessary;
+ (void)_registerStyle:forIdiom:;
+ (id)_styleForIdiom:;
@end

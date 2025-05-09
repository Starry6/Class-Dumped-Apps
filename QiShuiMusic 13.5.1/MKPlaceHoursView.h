@interface MKPlaceHoursView : UIView
@property (nonatomic) Q placeHoursViewOptions;
@property (nonatomic) _MKLocalizedHoursBuilder hoursBuilder;
@property (nonatomic) NSDictionary formattedHoursData;
@property (nonatomic) GEOBusinessHours businessHours;
@property (nonatomic) _MKUILabel topLabel;
@property (nonatomic) <MKPlaceHoursViewDelegate> hoursDelegate;
- (void)_commonInit;
- (void).cxx_destruct;
- (void)_contentSizeDidChange;
- (id)businessHours;
- (void)setBusinessHours:;
- (void)infoCardThemeChanged;
- (id)initWithBusinessHours:;
- (id)hoursGrayColor;
- (id)topLabel;
- (void)setTopLabel:;
- (id)formattedHoursData;
- (void)setHoursBuilder:;
- (void)setPlaceHoursViewOptions:;
- (void)applyRulesForTopAndBottomLabel;
- (BOOL)wantsDefaultClipping;
- (id)_standardLabel;
- (void)_updateOptionsForCollapsingToSingleLineAndColor;
- (void)_updateHoursView;
- (void)_collapseAllLabelsFromOptions;
- (BOOL)_shouldCollapseTopMessageLabel;
- (unsigned long long)placeHoursViewOptions;
- (id)hoursBuilder;
- (void)setFormattedHoursData:;
- (id)hoursDelegate;
- (void)setHoursDelegate:;
@end

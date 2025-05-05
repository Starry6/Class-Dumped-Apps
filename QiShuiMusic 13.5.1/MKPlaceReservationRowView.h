@interface MKPlaceReservationRowView : MKPlaceSectionRowView
@property (nonatomic) _MKPlaceReservationInfo reservationInfo;
@property (nonatomic) Q selectedTimeIndex;
@property (nonatomic) NSString selectedTimeString;
- (void)_updateTintColor;
- (void)tintColorDidChange;
- (void).cxx_destruct;
- (void)_contentSizeDidChange;
- (id)reservationInfo;
- (void)_actionMakeReservation;
- (id)initWithReservationInfo:;
- (unsigned long long)selectedTimeIndex;
- (void)setSelectedTimeIndex:;
- (id)selectedTimeString;
- (void)setSelectedTimeString:;
- (id)_newButtonForAttribution:;
- (id)_buttonFontLarge;
- (id)_buttonFontSmall;
- (double)_buttonTopMargin;
- (double)_buttonBottomMargin;
- (id)_attributedStringFromButtonTitle:useSmallFont:;
- (void)_updateWithReservationInfo;
- (void)_setupImmutableConstraints;
- (void)_updateMutableConstraints;
- (void)_updateButtonTitleAttributes;
@end

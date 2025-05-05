@interface MKTransitAttributionSummaryCell : MKCustomSeparatorCell
@property (nonatomic) NSString attributionSummary;
- (id)initWithStyle:reuseIdentifier:;
- (void)_contentSizeCategoryDidChange;
- (void)setAttribution:;
- (void)tintColorDidChange;
- (void).cxx_destruct;
- (BOOL)_newStationCardUIEnabled;
- (void)_updateConstraintValues;
- (void)setAttributionSummary:;
- (id)attributionSummary;
- (id)_moreString;
@end

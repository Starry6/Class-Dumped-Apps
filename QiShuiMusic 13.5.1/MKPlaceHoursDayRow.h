@interface MKPlaceHoursDayRow : MKPlaceSectionRowView
@property (nonatomic) MKPlaceHoursView hoursView;
@property (nonatomic) NSLayoutConstraint topAnchorToTopLabelBaseline;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void).cxx_destruct;
- (void)hoursViewDidUpdate:;
- (id)initWithBusinessHours:frame:;
- (void)_setUpViewsForPlaceHoursDayRow;
- (void)_setUpConstraints;
- (id)hoursView;
- (void)setHoursView:;
- (id)topAnchorToTopLabelBaseline;
- (void)setTopAnchorToTopLabelBaseline:;
@end

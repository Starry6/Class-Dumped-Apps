@interface PPTripEvent : PPScoredEvent
@property (nonatomic) NSArray tripParts;
- (id)destinations;
- (id)initWithCoder:;
- (void)encodeWithCoder:;
- (void).cxx_destruct;
- (id)description;
- (id)initWithStartDate:endDate:tripParts:;
- (id)destinationsBasedTitle;
- (id)tripParts;
+ (BOOL)supportsSecureCoding;
@end

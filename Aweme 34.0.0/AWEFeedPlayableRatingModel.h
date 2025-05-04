@interface AWEFeedPlayableRatingModel : MTLModel
@property (nonatomic) double totalStar;
@property (nonatomic) double currentStart;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (double)currentStart;
- (double)totalStar;
- (void)setTotalStar:;
- (void)setCurrentStart:;
+ (id)JSONKeyPathsByPropertyKey;
@end

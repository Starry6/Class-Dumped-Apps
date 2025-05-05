@interface GEOAppleRating : NSObject
@property (nonatomic) q ratingType;
@property (nonatomic) NSString localizedTitle;
@property (nonatomic) double percentage;
@property (nonatomic) double score;
@property (nonatomic) double maxScore;
@property (nonatomic) NSInteger numberOfRatingsUsedForScore;
@property (nonatomic) BOOL isRecommended;
- (double)score;
- (void).cxx_destruct;
- (id)localizedTitle;
- (id)initWithRating:;
- (double)percentage;
- (double)maxScore;
- (int)numberOfRatingsUsedForScore;
- (long long)ratingType;
- (BOOL)isRecommended;
@end

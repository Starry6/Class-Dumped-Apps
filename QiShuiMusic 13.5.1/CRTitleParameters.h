@interface CRTitleParameters : NSObject
@property (nonatomic) float minTitleProbability;
@property (nonatomic) Q minTitleLength;
- (unsigned long long)minTitleLength;
- (id)initWithMinTitleProbability:minTitleLength:;
- (float)minTitleProbability;
+ (id)defaultTitleParameters;
@end

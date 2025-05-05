@interface WRM_iRATProximityRecommendation : NSObject
@property (nonatomic) NSInteger RecommendationType;
@property (nonatomic) BOOL linkRecommendationIsValid;
@property (nonatomic) BOOL linkIsRecommended;
@property (nonatomic) WRM_iRATProximityRecommendationLogging metrics;
- (id)init;
- (void)dealloc;
- (void)setMetrics:;
- (id)metrics;
- (int)RecommendationType;
- (void)setRecommendationType:;
- (BOOL)linkRecommendationIsValid;
- (void)setLinkRecommendationIsValid:;
- (BOOL)linkIsRecommended;
- (void)setLinkIsRecommended:;
@end

@interface AWEDCFeedCellRecommendReasonManager : NSObject
+ (id)recommendReasonV2Dict:;
+ (BOOL)isValidRecommendReasonV2Dict:;
+ (BOOL)needToShowRecommendReason:;
+ (id)recommendReasonConfigModel:;
+ (id)sharedInstance;
@end

@interface AWETeenFeedDoubleColumnManager : NSObject
@property (nonatomic) double doubleColumnVCEnterTimeStamp;
@property (nonatomic) double doubleColumnInnerEnterTimeStamp;
- (void)teenmodeDoubleColumnALog:;
- (BOOL)isDoubleColumnEnable;
- (BOOL)needRecommendReasonTagWithModel:;
- (long long)doubleColumnType;
- (long long)bubbleGuideMaxDay;
- (id)p_doubleColumnConfig;
- (id)switchModeButtonText;
- (double)doubleColumnVCEnterTimeStamp;
- (void)setDoubleColumnVCEnterTimeStamp:;
- (double)doubleColumnInnerEnterTimeStamp;
- (void)setDoubleColumnInnerEnterTimeStamp:;
- (id)init;
+ (id)sharedInstance;
@end

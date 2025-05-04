@interface AWERedPacketPublishGuideResponseModel : AWELiteBaseApiModel
@property (nonatomic) q completedTimes;
@property (nonatomic) BOOL hasCompleted;
- (long long)completedTimes;
- (void)setCompletedTimes:;
- (BOOL)hasCompleted;
- (void)setHasCompleted:;
+ (id)JSONKeyPathsByPropertyKey;
@end

@interface AWETeenIMInteractNotificationCountModel : AWEBaseApiModel
@property (nonatomic) q group;
@property (nonatomic) q count;
@property (nonatomic) q latestTime;
@property (nonatomic) q interactiveShowType;
@property (nonatomic) q showType;
- (long long)latestTime;
- (void)setLatestTime:;
- (long long)interactiveShowType;
- (void)setInteractiveShowType:;
- (void)setCount:;
- (void)setGroup:;
- (long long)group;
- (long long)count;
- (void)setShowType:;
- (long long)showType;
+ (id)JSONKeyPathsByPropertyKey;
@end

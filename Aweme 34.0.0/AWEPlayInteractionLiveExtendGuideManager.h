@interface AWEPlayInteractionLiveExtendGuideManager : NSObject
@property (nonatomic) q lastShowTime;
- (void)setLastShowTime:;
- (long long)lastShowTime;
+ (id)shareInstance;
@end

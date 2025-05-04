@interface AWEIMChatRecommendVideoComponent : AWEIMComponentBase
@property (nonatomic) AWEIMChatRecommendVideoContext chatRecommendVideoContext;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)componentDidMounted:;
- (void)showRecommendVideoVC;
- (void)didClickSendAwemeModel:;
- (BOOL)hasSentAwemeModelInThisLife:;
- (id)chatRecommendVideoContext;
- (void)setChatRecommendVideoContext:;
- (void).cxx_destruct;
+ (BOOL)canCreateComponentWithContext:;
+ (id)lazyComponentWakeupInterface;
@end

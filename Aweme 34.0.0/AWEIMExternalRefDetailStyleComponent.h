@interface AWEIMExternalRefDetailStyleComponent : AWEIMFlexComponent
@property (nonatomic) NSString referUserNickName;
@property (nonatomic) BOOL hasFetchNickName;
@property (nonatomic) AWEIMComponentManager componentManager;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)componentContext;
- (id)componentsNameArrayWithContext:;
- (void)setComponentManager:;
- (void)needUpdateDisplayWithContextOptions:;
- (void)componentDidMounted:;
- (void)p_updateProps;
- (id)quoteReplyBubbleView;
- (void)setupQuoteTitle;
- (BOOL)p_isCombineShareScene;
- (id)referUserNickName;
- (void)p_fetchReferUserNickName;
- (BOOL)hasFetchNickName;
- (void)setHasFetchNickName:;
- (void)setReferUserNickName:;
- (void).cxx_destruct;
- (id)componentManager;
+ (BOOL)canCreateComponentWithContext:;
+ (id)componentWithContext:;
@end

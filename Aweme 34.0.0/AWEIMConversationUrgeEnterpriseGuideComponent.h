@interface AWEIMConversationUrgeEnterpriseGuideComponent : AWEIMComponentBase
@property (nonatomic) BOOL hasPresented;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)componentDidMounted:;
- (void)presentUrgeEnterpriseGuideViewIfNeedWithScene:;
- (id)getGuideViewControllerWithScene:;
- (BOOL)hasPresented;
- (void)setHasPresented:;
+ (BOOL)canCreateComponentWithContext:;
@end

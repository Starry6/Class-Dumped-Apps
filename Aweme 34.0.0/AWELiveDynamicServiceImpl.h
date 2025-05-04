@interface AWELiveDynamicServiceImpl : NSObject
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)createDynamicViewWithDsl:bizIdentity:customData:fitSize:delegate:;
- (void)reloadDynamicView:withDsl:customData:fitSize:;
- (void)registerLocalMethod:toView:;
- (void)openDynamicSchemeEvent:toView:;
- (id)init;
@end

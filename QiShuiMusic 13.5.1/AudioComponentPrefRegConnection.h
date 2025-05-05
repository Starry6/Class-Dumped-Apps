@interface AudioComponentPrefRegConnection : NSObject
- (id)initWithRegistrar:connection:;
- (void).cxx_destruct;
- (id).cxx_construct;
- (void)setExtensionComponentList:linkedSDKRequiresEntitlement:components:reply:;
- (void)getExtensionComponentList:linkedSDKRequiresEntitlement:reply:;
- (void)getComponentUserTags:reply:;
- (void)setComponentUserTags:tags:;
- (void)getExtensionIcon:reply:;
- (void)getInterAppIcon:reply:;
- (BOOL)isGenericAppIcon:size:scale:;
@end

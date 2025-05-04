@interface AWEIMEnterpriseSwitchModeTagComponent : AWEIMChatCellComponentBase
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)afterInitialComponentAllResolved:;
- (void)updateComponentWhenChatUpdate:;
- (void)messageTabModeDidChangeWithInfo:;
- (void)__didChangeMessageTabMode:;
- (void)p_refreshEnterpriseSwitchModeTagIfNeeded:;
- (void)p_setEnterpriseSwitchModeTag:;
- (void)dealloc;
+ (BOOL)canCreateComponentWithContext:;
+ (BOOL)enableMessageTabFpsOptV2;
@end

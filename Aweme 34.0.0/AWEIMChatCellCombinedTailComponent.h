@interface AWEIMChatCellCombinedTailComponent : AWEIMChatCellComponentBase
@property (nonatomic) BOOL hasUnRead;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
@property (nonatomic) AWEIMComponentManager componentManager;
- (id)componentContext;
- (id)componentsNameArrayWithContext:;
- (void)setComponentManager:;
- (void)updateComponentWhenChatUpdate:;
- (void)onCellWillRenderForCurrentComponent;
- (long long)currentComponentTailType;
- (void)setHasUnRead:;
- (BOOL)hasUnRead;
- (void).cxx_destruct;
- (id)componentManager;
@end

@interface LynxUIComponent : LynxUIView
@property (nonatomic) <LynxUIComponentLayoutObserver> layoutObserver;
@property (nonatomic) NSString itemKey;
@property (nonatomic) BOOL frameDidSet;
- (void)asyncListItemRenderFinished:;
- (BOOL)frameDidSet;
- (void)onNodeReady;
- (void)setItemKey:;
- (void)setItemKey:requestReset:;
- (void)setFrame:;
- (void).cxx_destruct;
- (id)layoutObserver;
- (void)setLayoutObserver:;
- (id)itemKey;
+ (id)__lynx_prop_config__281;
+ (void)lynxLazyLoad;
@end

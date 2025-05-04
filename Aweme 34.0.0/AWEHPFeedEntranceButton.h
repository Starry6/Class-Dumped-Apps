@interface AWEHPFeedEntranceButton : AWEHPFeedEntranceView
@property (nonatomic) BOOL useOriginInteractionArea;
@property (nonatomic) BOOL disableOverrideHitTest;
- (void)configImage:hotWord:;
- (void)updateHotword:;
- (void)layoutForHotWordStlye;
- (void)configImage:Label:position:;
- (BOOL)useOriginInteractionArea;
- (BOOL)disableOverrideHitTest;
- (void)setUseOriginInteractionArea:;
- (void)setDisableOverrideHitTest:;
- (id)init;
- (id)hitTest:withEvent:;
@end

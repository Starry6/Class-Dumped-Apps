@interface IESLiveInteractEntranceBaseView : UIView
@property (nonatomic) BOOL interactiveEntrance_entranceEnable;
@property (nonatomic) UITapGestureRecognizer interactiveEntrance_replacedTap;
@property (nonatomic) UIView interactiveEntrance_blockView;
@property (nonatomic) @? interactiveEntrance_replacedTapBlock;
- (id)interactiveEntrance_replacedTap;
- (id)interactiveEntrance_blockView;
- (BOOL)interactiveEntrance_entranceEnable;
- (void)interactiveEntrance_replacedTapAction:;
- (id)interactiveEntrance_replacedTapBlock;
- (void)interactiveEntrance_setEntranceEnable:replacedTapAction:;
- (void)setInteractiveEntrance_blockView:;
- (void)setInteractiveEntrance_entranceEnable:;
- (void)setInteractiveEntrance_replacedTap:;
- (void)setInteractiveEntrance_replacedTapBlock:;
- (void).cxx_destruct;
@end

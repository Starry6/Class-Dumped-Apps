@interface IESECDraggableLynxUICollection : LynxUICollection
@property (nonatomic) BOOL lynxDragEnable;
@property (nonatomic) q lynxDragTriggerDuration;
@property (nonatomic) UILongPressGestureRecognizer lynxDragGesture;
- (id)lynxDragGesture;
- (void)setLynxDragEnable:requestReset:;
- (void)handleLongGesture:;
- (BOOL)lynxDragEnable;
- (long long)lynxDragTriggerDuration;
- (void)setLynxDragEnable:;
- (void)setLynxDragGesture:;
- (void)setLynxDragTriggerDuration:;
- (void)setLynxDragTriggerDuration:requestReset:;
- (void)setSign:;
- (void).cxx_destruct;
- (id)createView;
+ (id)__lynx_prop_config__720;
+ (id)__lynx_prop_config__821;
+ (void)registerECDraggableCollection;
@end

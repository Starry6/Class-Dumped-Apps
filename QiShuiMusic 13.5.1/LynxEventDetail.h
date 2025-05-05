@interface LynxEventDetail : NSObject
@property (nonatomic) LynxEvent event;
@property (nonatomic) <LynxEventTargetBase> eventTarget;
@property (nonatomic) LynxView lynxView;
@property (nonatomic) UIEvent uiEvent;
@property (nonatomic) NSSet touches;
- (void)setEventTarget:;
- (id)eventTarget;
- (id)initWithEvent:target:lynxView:;
- (BOOL)isMultiTouch;
- (id)lynxView;
- (void)setLynxView:;
- (void)setUiEvent:;
- (id)targetPointMap;
- (void)setEvent:;
- (id)event;
- (int)eventType;
- (id)eventName;
- (void).cxx_destruct;
- (id)touches;
- (id)params;
- (id)targetPoint;
- (void)setTouches:;
- (id)uiEvent;
@end

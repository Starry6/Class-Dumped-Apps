@interface DOMUIEvent : DOMEvent
@property (nonatomic) DOMAbstractView view;
@property (nonatomic) NSInteger detail;
@property (nonatomic) NSInteger keyCode;
@property (nonatomic) NSInteger charCode;
@property (nonatomic) NSInteger layerX;
@property (nonatomic) NSInteger layerY;
@property (nonatomic) NSInteger pageX;
@property (nonatomic) NSInteger pageY;
@property (nonatomic) NSInteger which;
- (int)detail;
- (id)view;
- (int)keyCode;
- (int)charCode;
- (int)layerX;
- (int)layerY;
- (int)pageX;
- (int)pageY;
- (int)which;
- (void)initUIEvent:canBubble:cancelable:view:detail:;
- (void)initUIEvent:::::;
@end

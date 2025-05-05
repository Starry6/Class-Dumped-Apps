@interface DOMTextEvent : DOMUIEvent
@property (nonatomic) NSString data;
- (id)data;
- (void)initTextEvent:canBubbleArg:cancelableArg:viewArg:dataArg:;
@end

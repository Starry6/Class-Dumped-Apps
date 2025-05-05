@interface DOMKeyboardEvent : DOMUIEvent
@property (nonatomic) NSString keyIdentifier;
@property (nonatomic) I location;
@property (nonatomic) I keyLocation;
@property (nonatomic) BOOL ctrlKey;
@property (nonatomic) BOOL shiftKey;
@property (nonatomic) BOOL altKey;
@property (nonatomic) BOOL metaKey;
@property (nonatomic) BOOL altGraphKey;
@property (nonatomic) NSInteger keyCode;
@property (nonatomic) NSInteger charCode;
- (unsigned int)location;
- (int)keyCode;
- (id)keyIdentifier;
- (unsigned int)keyLocation;
- (BOOL)ctrlKey;
- (BOOL)shiftKey;
- (BOOL)altKey;
- (BOOL)metaKey;
- (BOOL)altGraphKey;
- (int)charCode;
- (BOOL)getModifierState:;
- (void)initKeyboardEvent:canBubble:cancelable:view:keyIdentifier:location:ctrlKey:altKey:shiftKey:metaKey:altGraphKey:;
- (void)initKeyboardEvent:canBubble:cancelable:view:keyIdentifier:location:ctrlKey:altKey:shiftKey:metaKey:;
- (void)initKeyboardEvent:canBubble:cancelable:view:keyIdentifier:keyLocation:ctrlKey:altKey:shiftKey:metaKey:altGraphKey:;
- (void)initKeyboardEvent:canBubble:cancelable:view:keyIdentifier:keyLocation:ctrlKey:altKey:shiftKey:metaKey:;
@end

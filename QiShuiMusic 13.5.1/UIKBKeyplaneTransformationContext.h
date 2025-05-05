@interface UIKBKeyplaneTransformationContext : NSObject
@property (nonatomic) UIKBTree activeKeyboard;
@property (nonatomic) UIKBTree activeKeyplane;
@property (nonatomic) {CGSize=dd} keyboardSize;
@property (nonatomic) NSString currentKeyplaneName;
@property (nonatomic) UIKBScreenTraits screenTraits;
@property (nonatomic) BOOL usesScriptSwitch;
@property (nonatomic) double resizingOffset;
- (double)resizingOffset;
- (id)screenTraits;
- (void)setResizingOffset:;
- (void).cxx_destruct;
- (void)setScreenTraits:;
- (id)activeKeyboard;
- (id)keyboardSize;
- (void)setKeyboardSize:;
- (void)setActiveKeyboard:;
- (id)activeKeyplane;
- (void)setActiveKeyplane:;
- (id)currentKeyplaneName;
- (void)setCurrentKeyplaneName:;
- (BOOL)usesScriptSwitch;
- (void)setUsesScriptSwitch:;
@end

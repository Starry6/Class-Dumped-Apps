@interface UIHBClickGestureRecognizer : UIGestureRecognizer
@property (nonatomic) Q clickCount;
@property (nonatomic) BOOL recognizesOnPressPhaseBegan;
@property (nonatomic) NSArray allowedPressTypes;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)pressesCancelled:withEvent:;
- (void)_fail;
- (void)pressesChanged:withEvent:;
- (void)pressesEnded:withEvent:;
- (unsigned long long)clickCount;
- (void)pressesBegan:withEvent:;
- (void).cxx_destruct;
- (void)_succeed;
- (void)_resetGestureRecognizer;
- (id)initWithTarget:action:;
- (void)_processPresses:;
- (void)setClickCount:;
- (void)pressesEventDidReceiveTerminal:;
- (BOOL)recognizesOnPressPhaseBegan;
- (void)setRecognizesOnPressPhaseBegan:;
@end

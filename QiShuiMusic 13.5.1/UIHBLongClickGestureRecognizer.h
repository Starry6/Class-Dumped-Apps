@interface UIHBLongClickGestureRecognizer : UIGestureRecognizer
@property (nonatomic) Q numberOfClicksRequired;
@property (nonatomic) NSArray allowedPressTypes;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)pressesCancelled:withEvent:;
- (void)_fail;
- (void)pressesChanged:withEvent:;
- (void)pressesEnded:withEvent:;
- (void)pressesBegan:withEvent:;
- (void).cxx_destruct;
- (void)_succeed;
- (void)_resetGestureRecognizer;
- (void)setNumberOfClicksRequired:;
- (unsigned long long)numberOfClicksRequired;
- (id)initWithTarget:action:;
- (void)_processPresses:;
- (void)pressesEventDidReceiveTerminal:;
- (unsigned long long)_effectiveNumberOfClicksRequired;
- (BOOL)_requiredClickCountMetForPress:;
@end

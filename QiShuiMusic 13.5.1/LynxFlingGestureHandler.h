@interface LynxFlingGestureHandler : LynxBaseGestureHandler
@property (nonatomic) BOOL isInvokedBegin;
@property (nonatomic) BOOL isInvokedStart;
@property (nonatomic) BOOL isInvokedEnd;
- (id)eventParamsInActive:;
- (void)handleConfigMap:;
- (id)initWithSign:context:member:detector:;
- (BOOL)isGestureTypeMatched:;
- (BOOL)isInvokedBegin;
- (BOOL)isInvokedEnd;
- (BOOL)isInvokedStart;
- (void)onBegin:touchEvent:;
- (void)onEnd:touchEvent:;
- (void)onHandle:touches:event:touchEvent:flingPoint:;
- (void)onStart:touchEvent:;
- (void)onUpdate:touchEvent:;
- (void)setIsInvokedBegin:;
- (void)setIsInvokedEnd:;
- (void)setIsInvokedStart:;
- (void)end;
- (void)reset;
- (void)fail;
@end

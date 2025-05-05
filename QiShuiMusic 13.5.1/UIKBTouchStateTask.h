@interface UIKBTouchStateTask : NSObject
@property (nonatomic) UIKBTouchState touchState;
@property (nonatomic) @? task;
@property (nonatomic) BOOL isBusy;
- (void)setIsBusy:;
- (BOOL)isBusy;
- (id)task;
- (long long)compare:;
- (void).cxx_destruct;
- (id)copyWithZone:;
- (id)initWithTouchState:andTask:;
- (id)touchState;
+ (id)touchStateTaskForTouchState:andTask:;
@end

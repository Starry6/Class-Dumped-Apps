@interface LynxTask : NSObject
@property (nonatomic) BOOL repeatable;
- (void)startWithObject:;
- (void)start;
- (BOOL)repeatable;
- (void)setRepeatable:;
+ (id)taskWithData:;
@end

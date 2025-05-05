@interface SCNTimingFunction : NSObject
- (void)dealloc;
- (id)initWithCoder:;
- (void)encodeWithCoder:;
- (id)initWithTimingFunctionRef:;
- (id)c3dTimingFunction;
+ (BOOL)supportsSecureCoding;
+ (id)functionWithTimingMode:;
+ (id)functionWithCAMediaTimingFunction:;
@end

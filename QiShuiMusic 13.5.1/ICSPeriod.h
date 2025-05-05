@interface ICSPeriod : NSObject
- (id)end;
- (id)start;
- (id)initWithCoder:;
- (id)initWithStart:end:;
- (void)encodeWithCoder:;
- (void)_ICSStringWithOptions:appendingToString:;
- (void).cxx_destruct;
- (id)duration;
- (BOOL)isDurationBased;
- (id)initWithStart:;
- (id)initWithStart:duration:;
+ (BOOL)supportsSecureCoding;
@end

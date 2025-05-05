@interface SessionKit.OpaqueSessionPayload : NSObject
- (id)init;
- (id)initWithCoder:;
- (void)encodeWithCoder:;
- (void).cxx_destruct;
- (BOOL)isEqual:;
+ (BOOL)supportsSecureCoding;
+ (void)setSupportsSecureCoding:;
@end

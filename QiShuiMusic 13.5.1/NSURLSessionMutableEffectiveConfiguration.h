@interface NSURLSessionMutableEffectiveConfiguration : NSURLSessionConfiguration
- (id)initWithCoder:;
- (id)_initWithConfiguration:;
- (void)encodeWithCoder:;
+ (BOOL)supportsSecureCoding;
@end

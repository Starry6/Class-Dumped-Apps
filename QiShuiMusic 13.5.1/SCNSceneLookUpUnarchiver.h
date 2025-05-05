@interface SCNSceneLookUpUnarchiver : NSObject
- (id)initWithCoder:;
- (void)encodeWithCoder:;
+ (BOOL)supportsSecureCoding;
@end

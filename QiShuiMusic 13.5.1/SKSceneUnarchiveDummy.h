@interface SKSceneUnarchiveDummy : NSObject
- (id)initWithCoder:;
- (void)encodeWithCoder:;
+ (BOOL)supportsSecureCoding;
@end

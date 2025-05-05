@interface EMActivityObjectID : EMObjectID
- (id)init;
- (id)initWithCoder:;
- (void)encodeWithCoder:;
+ (BOOL)supportsSecureCoding;
@end

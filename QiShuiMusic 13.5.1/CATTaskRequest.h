@interface CATTaskRequest : NSObject
@property (nonatomic) BOOL handlesNotifications;
- (id)init;
- (id)initWithCoder:;
- (void)encodeWithCoder:;
- (BOOL)handlesNotifications;
- (void)setHandlesNotifications:;
+ (BOOL)supportsSecureCoding;
+ (Class)allowlistedClassForResultObject;
+ (Class)whitelistedClassForResultObject;
@end

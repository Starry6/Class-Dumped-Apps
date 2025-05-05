@interface NSCoreDataXPCMessage : NSObject
- (void)dealloc;
- (id)initWithCoder:;
- (void)encodeWithCoder:;
+ (BOOL)supportsSecureCoding;
@end

@interface NSXPCStoreManagedObjectArchivingToken : NSObject
- (void)dealloc;
- (id)URI;
- (id)initWithURI:;
- (id)initWithCoder:;
- (void)encodeWithCoder:;
- (BOOL)isEqual:;
+ (BOOL)supportsSecureCoding;
@end

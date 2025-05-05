@interface MSNScopedExceptionsServer : NSObject
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (BOOL)isConnectionAllowedToAssertException:;
- (BOOL)listener:shouldAcceptNewConnection:;
- (void).cxx_destruct;
- (void)beginException:;
- (void)endException:;
- (BOOL)isExceptionInEffect:;
- (id)initWithQueue:;
+ (id)sharedProxy;
+ (id)validEntitlements;
+ (id)validExceptions;
@end

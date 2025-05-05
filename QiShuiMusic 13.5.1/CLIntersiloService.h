@interface CLIntersiloService : NSObject
@property (nonatomic) <CLIntersiloUniverse> universe;
@property (nonatomic) BOOL valid;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
@property (nonatomic) CLSilo silo;
@property (nonatomic) CLServiceVendor vendor;
- (id)init;
- (BOOL)valid;
- (void)setValid:;
- (id)debugDescription;
- (id)silo;
- (id)universe;
- (void).cxx_destruct;
- (void)setVendor:;
- (id)vendor;
- (id)initWithInboundProtocol:outboundProtocol:;
- (void)setSilo:;
+ (BOOL)isSupported;
+ (void)becameFatallyBlocked:index:;
+ (void)performSyncOnSilo:invoker:;
+ (id)getSilo;
@end

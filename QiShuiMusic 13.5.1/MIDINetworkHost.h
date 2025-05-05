@interface MIDINetworkHost : NSObject
@property (nonatomic) NSString name;
@property (nonatomic) NSString address;
@property (nonatomic) Q port;
@property (nonatomic) NSString netServiceName;
@property (nonatomic) NSString netServiceDomain;
- (id)init;
- (void)dealloc;
- (void)setName:;
- (id)host;
- (unsigned long long)port;
- (id)displayName;
- (id)description;
- (id)address;
- (id)name;
- (id)netServiceName;
- (id)netServiceDomain;
- (BOOL)hasSameAddressAs:;
- (id)addressAsText;
+ (id)hostWithName:address:port:;
+ (id)hostWithName:netServiceName:netServiceDomain:;
+ (id)hostWithName:netService:;
+ (id)fromAddressAsText:withName:;
@end

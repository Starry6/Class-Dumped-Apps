@interface DAAccountExternalIdentificationInfo : NSObject
@property (nonatomic) NSString host;
@property (nonatomic) q port;
@property (nonatomic) BOOL useSSL;
@property (nonatomic) NSArray ownerAddresses;
@property (nonatomic) NSString preferredOwnerAddress;
- (id)host;
- (long long)port;
- (void).cxx_destruct;
- (BOOL)useSSL;
- (id)ownerAddresses;
- (id)preferredOwnerAddress;
- (id)initWithHost:port:useSSL:ownerAddresses:preferredOwnerAddress:;
@end

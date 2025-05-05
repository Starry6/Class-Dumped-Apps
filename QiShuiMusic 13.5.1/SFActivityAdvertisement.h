@interface SFActivityAdvertisement : NSObject
@property (nonatomic) q advertisementVersion;
@property (nonatomic) NSData advertisementPayload;
@property (nonatomic) NSDictionary options;
@property (nonatomic) SFPeerDevice device;
- (id)initWithCoder:;
- (void)encodeWithCoder:;
- (id)options;
- (void).cxx_destruct;
- (id)description;
- (id)device;
- (id)advertisementPayload;
- (id)initWithAdvertisementVersion:advertisementPayload:options:device:;
- (long long)advertisementVersion;
+ (BOOL)supportsSecureCoding;
@end

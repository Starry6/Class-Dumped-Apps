@interface SFPasswordSharingInfo : NSObject
@property (nonatomic) NSNumber channel;
@property (nonatomic) NSString networkName;
@property (nonatomic) NSString psk;
- (void)setNetworkName:;
- (void)setChannel:;
- (id)channel;
- (id)initWithCoder:;
- (void)encodeWithCoder:;
- (void).cxx_destruct;
- (id)networkName;
- (id)psk;
- (void)setPsk:;
+ (BOOL)supportsSecureCoding;
@end

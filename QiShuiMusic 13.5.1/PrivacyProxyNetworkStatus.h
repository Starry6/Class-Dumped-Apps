@interface PrivacyProxyNetworkStatus : NSObject
@property (nonatomic) Q networkStatus;
@property (nonatomic) NSInteger networkType;
@property (nonatomic) NSString networkName;
- (void)setNetworkName:;
- (int)networkType;
- (id)descriptionWithIndent:options:;
- (unsigned long long)networkStatus;
- (id)initWithCoder:;
- (id)networkTypeString;
- (void)encodeWithCoder:;
- (id)initWithData:;
- (void)setNetworkType:;
- (void).cxx_destruct;
- (id)networkStatusString;
- (id)description;
- (id)networkName;
- (id)serialize;
- (void)setNetworkStatus:;
- (id)initWithStatus:type:name:;
- (id)copyWithZone:;
+ (BOOL)supportsSecureCoding;
@end

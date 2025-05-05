@interface IDSActivityUpdate : NSObject
@property (nonatomic) BOOL isDeviceOnline;
@property (nonatomic) IDSDevice matchingDevice;
@property (nonatomic) NSArray URIs;
@property (nonatomic) NSString subActivity;
@property (nonatomic) NSData pushToken;
@property (nonatomic) Q serverTimestamp;
@property (nonatomic) NSData clientContext;
- (id)URIs;
- (id)clientContext;
- (id)initWithCoder:;
- (id)pushToken;
- (void)encodeWithCoder:;
- (void).cxx_destruct;
- (id)description;
- (id)subActivity;
- (id)initWithSubActivity:pushToken:serverTimestamp:clientContext:isDeviceOnline:;
- (unsigned long long)serverTimestamp;
- (BOOL)isDeviceOnline;
- (void)setIsDeviceOnline:;
- (id)matchingDevice;
- (void)setMatchingDevice:;
- (void)setURIs:;
+ (BOOL)supportsSecureCoding;
@end

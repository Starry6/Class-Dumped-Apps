@interface SFAutoUnlockNotificationModel : NSObject
@property (nonatomic) NSString deviceName;
@property (nonatomic) NSString modelIdentifier;
@property (nonatomic) q type;
@property (nonatomic) NSString subtitle;
@property (nonatomic) NSString applicationName;
@property (nonatomic) NSString navBarTitle;
@property (nonatomic) NSData applicationIconData;
- (id)deviceName;
- (id)applicationName;
- (void)setSubtitle:;
- (id)initWithCoder:;
- (id)modelIdentifier;
- (void)encodeWithCoder:;
- (long long)type;
- (void).cxx_destruct;
- (id)subtitle;
- (void)setApplicationName:;
- (void)setNavBarTitle:;
- (id)applicationIconData;
- (id)navBarTitle;
- (id)initWithDeviceName:modelIdentifier:type:;
- (void)setApplicationIconData:;
+ (BOOL)supportsSecureCoding;
@end

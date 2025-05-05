@interface AKPrivateEmail : NSObject
@property (nonatomic) NSString key;
@property (nonatomic) NSString clientAppBundleId;
@property (nonatomic) NSString privateEmailAddress;
- (id)key;
- (id)initWithCoder:;
- (void)encodeWithCoder:;
- (void).cxx_destruct;
- (id)description;
- (id)copyWithZone:;
- (id)clientAppBundleId;
- (id)initWithAddress:forKey:;
- (id)initWithAddress:forKey:withBundleId:;
- (id)privateEmailAddress;
+ (BOOL)supportsSecureCoding;
@end

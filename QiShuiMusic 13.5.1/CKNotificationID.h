@interface CKNotificationID : NSObject
@property (nonatomic) NSString notificationUUID;
- (id)notificationUUID;
- (id)initWithCoder:;
- (unsigned long long)hash;
- (id)CKPropertiesDescription;
- (void)encodeWithCoder:;
- (void).cxx_destruct;
- (id)description;
- (BOOL)isEqual:;
- (id)copyWithZone:;
- (id)initWithNotificationUUID:;
- (id)CKXPCSuitableString;
+ (BOOL)supportsSecureCoding;
@end

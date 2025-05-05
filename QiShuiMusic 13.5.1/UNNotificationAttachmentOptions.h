@interface UNNotificationAttachmentOptions : NSObject
@property (nonatomic) Q displayLocation;
@property (nonatomic) NSDictionary thumbnailGeneratorUserInfo;
- (id)_initWithOptions:;
- (id)init;
- (id)initWithCoder:;
- (unsigned long long)hash;
- (void)encodeWithCoder:;
- (void).cxx_destruct;
- (id)description;
- (id)mutableCopyWithZone:;
- (BOOL)isEqual:;
- (id)copyWithZone:;
- (unsigned long long)displayLocation;
- (id)_initWithDisplayLocation:thumbnailGeneratorUserInfo:;
- (id)thumbnailGeneratorUserInfo;
+ (BOOL)supportsSecureCoding;
@end

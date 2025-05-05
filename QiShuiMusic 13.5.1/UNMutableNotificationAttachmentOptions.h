@interface UNMutableNotificationAttachmentOptions : UNNotificationAttachmentOptions
@property (nonatomic) Q displayLocation;
@property (nonatomic) NSDictionary thumbnailGeneratorUserInfo;
- (id)copyWithZone:;
- (void)setDisplayLocation:;
- (void)setThumbnailGeneratorUserInfo:;
@end

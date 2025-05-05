@interface UIMutableUserNotificationActionSettings : UIUserNotificationActionSettings
@property (nonatomic) NSString category;
- (id)copyWithZone:;
- (void)setActions:forContext:;
@end

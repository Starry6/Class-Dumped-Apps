@interface UIMutableUserNotificationCategory : UIUserNotificationCategory
@property (nonatomic) NSString identifier;
- (id)copyWithZone:;
- (void)setActions:forContext:;
@end

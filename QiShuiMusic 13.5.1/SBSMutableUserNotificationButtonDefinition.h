@interface SBSMutableUserNotificationButtonDefinition : SBSUserNotificationButtonDefinition
@property (nonatomic) NSString title;
@property (nonatomic) NSInteger presentationStyle;
@property (nonatomic) BOOL isPreferredButton;
- (void)setTitle:;
- (void)setPresentationStyle:;
- (id)copyWithZone:;
- (void)setIsPreferredButton:;
@end

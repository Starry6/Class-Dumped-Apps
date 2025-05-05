@interface UIMutableUserNotificationAction : UIUserNotificationAction
@property (nonatomic) NSString identifier;
@property (nonatomic) NSString title;
@property (nonatomic) Q behavior;
@property (nonatomic) NSDictionary parameters;
@property (nonatomic) Q activationMode;
@property (nonatomic) BOOL authenticationRequired;
@property (nonatomic) BOOL destructive;
- (id)copyWithZone:;
@end

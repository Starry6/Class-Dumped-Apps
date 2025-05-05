@interface UNTextInputNotificationAction : UNNotificationAction
@property (nonatomic) NSString textInputButtonTitle;
@property (nonatomic) NSString textInputPlaceholder;
- (id)description;
- (BOOL)isEqual:;
+ (id)actionWithIdentifier:title:options:textInputButtonTitle:textInputPlaceholder:;
+ (id)actionWithIdentifier:title:options:icon:textInputButtonTitle:textInputPlaceholder:;
@end

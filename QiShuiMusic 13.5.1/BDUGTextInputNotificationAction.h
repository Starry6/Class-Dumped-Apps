@interface BDUGTextInputNotificationAction : BDUGNotificationAction
@property (nonatomic) NSString textInputButtonTitle;
@property (nonatomic) NSString textInputPlaceholder;
- (void)setTextInputButtonTitle:;
- (id)textInputPlaceholder;
- (id)textInputButtonTitle;
- (void)setTextInputPlaceholder:;
- (void).cxx_destruct;
+ (id)actionWithIdentifier:title:options:textInputButtonTitle:textInputPlaceholder:icon:;
+ (id)actionWithIdentifier:title:options:textInputButtonTitle:textInputPlaceholder:;
@end

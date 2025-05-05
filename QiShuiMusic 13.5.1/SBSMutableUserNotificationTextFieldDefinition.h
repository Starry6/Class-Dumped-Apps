@interface SBSMutableUserNotificationTextFieldDefinition : SBSUserNotificationTextFieldDefinition
@property (nonatomic) NSString title;
@property (nonatomic) NSString value;
@property (nonatomic) BOOL secure;
@property (nonatomic) Q maxLength;
@property (nonatomic) q keyboardType;
@property (nonatomic) q autocapitalizationType;
@property (nonatomic) q autocorrectionType;
- (void)setAutocapitalizationType:;
- (void)setAutocorrectionType:;
- (void)setKeyboardType:;
- (void)setMaxLength:;
- (void)setTitle:;
- (void)setSecure:;
- (void)setValue:;
- (id)copyWithZone:;
@end

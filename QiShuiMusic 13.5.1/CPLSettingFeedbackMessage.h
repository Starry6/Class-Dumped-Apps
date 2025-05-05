@interface CPLSettingFeedbackMessage : CPLFeedbackMessage
@property (nonatomic) NSString settingName;
@property (nonatomic) NSString value;
- (id)settingName;
- (void).cxx_destruct;
- (id)value;
- (id)serverMessage;
- (id)initWithSetting:value:libraryIdentifier:;
+ (id)feedbackType;
@end

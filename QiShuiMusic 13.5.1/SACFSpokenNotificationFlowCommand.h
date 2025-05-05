@interface SACFSpokenNotificationFlowCommand : SACFAbstractClientCommand
@property (nonatomic) SAAppInfo appInfo;
@property (nonatomic) NSString languageCode;
@property (nonatomic) NSString notificationID;
@property (nonatomic) NSString outputVoiceLanguageCode;
@property (nonatomic) BOOL shouldPromptUser;
@property (nonatomic) NSString userAgent;
@property (nonatomic) NSString userInterfaceIdiom;
- (id)userAgent;
- (void)setUserAgent:;
- (id)notificationID;
- (id)groupIdentifier;
- (void)setLanguageCode:;
- (id)languageCode;
- (void)setUserInterfaceIdiom:;
- (id)appInfo;
- (void)setNotificationID:;
- (BOOL)requiresResponse;
- (id)encodedClassName;
- (id)userInterfaceIdiom;
- (BOOL)shouldPromptUser;
- (void)setShouldPromptUser:;
- (id)outputVoiceLanguageCode;
- (void)setOutputVoiceLanguageCode:;
- (BOOL)mutatingCommand;
- (void)setAppInfo:;
+ (id)spokenNotificationFlowCommand;
+ (id)spokenNotificationFlowCommandWithDictionary:context:;
@end

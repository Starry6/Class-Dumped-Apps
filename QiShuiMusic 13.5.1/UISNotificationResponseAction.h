@interface UISNotificationResponseAction : BSAction
@property (nonatomic) UNNotificationResponse response;
@property (nonatomic) BOOL isLocal;
@property (nonatomic) BOOL isRemote;
@property (nonatomic) BOOL isDefaultAction;
- (id)_trigger;
- (long long)UIActionType;
- (id)initWithXPCDictionary:;
- (id)valueDescriptionForFlag:object:ofSetting:;
- (id)response;
- (void).cxx_destruct;
- (BOOL)isKindOfClass:;
- (BOOL)isRemote;
- (BOOL)isLocal;
- (id)keyDescriptionForSetting:;
- (id)initWithResponse:withHandler:;
- (BOOL)isDefaultAction;
@end

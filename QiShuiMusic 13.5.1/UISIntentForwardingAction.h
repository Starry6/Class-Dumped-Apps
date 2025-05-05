@interface UISIntentForwardingAction : BSAction
@property (nonatomic) INIntent intent;
@property (nonatomic) INIntentForwardingAction intentForwardingAction;
- (id)intent;
- (long long)UIActionType;
- (void).cxx_destruct;
- (id)keyDescriptionForSetting:;
- (id)initWithIntentForwardingAction:responseHandler:;
- (id)intentForwardingAction;
- (id)initWithIntent:reply:;
@end

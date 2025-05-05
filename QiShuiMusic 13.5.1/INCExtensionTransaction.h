@interface INCExtensionTransaction : NSObject
@property (nonatomic) INIntent currentIntent;
@property (nonatomic) INIntentResponse currentIntentResponse;
@property (nonatomic) BOOL donateInteraction;
@property (nonatomic) NSString groupIdentifier;
@property (nonatomic) INCExtensionRequest request;
@property (nonatomic) NSUserActivity currentUserActivity;
@property (nonatomic) INCExtensionTransactionState state;
@property (nonatomic) BOOL shouldResetRequestAfterHandle;
- (BOOL)shouldResetRequestAfterHandle;
- (id)groupIdentifier;
- (void)setState:;
- (id)currentIntent;
- (id)initWithIntent:donateInteraction:groupIdentifier:;
- (id)request;
- (id)currentIntentResponse;
- (void)_addUserActivities:;
- (BOOL)donateInteraction;
- (id)state;
- (void)_setCurrentIntentResponse:;
- (void).cxx_destruct;
- (void)setShouldResetRequestAfterHandle:;
- (id)description;
- (id)currentUserActivity;
- (void)_setCurrentIntent:;
- (id)userActivityWithIdentifier:;
- (void)_updateCurrentUserActivityForType:intent:intentResponse:;
@end

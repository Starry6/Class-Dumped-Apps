@interface SASProximityCompanionAuthRequestAction : SASProximityAction
@property (nonatomic) AKDevice companionDevice;
@property (nonatomic) ACAccount account;
- (id)account;
- (void)setAccount:;
- (BOOL)hasResponse;
- (void).cxx_destruct;
- (void)setCompanionDevice:;
- (id)companionDevice;
- (id)responsePayload;
- (void)setResponseFromData:;
- (id)idmsAccountForiCloud;
+ (unsigned long long)actionID;
@end

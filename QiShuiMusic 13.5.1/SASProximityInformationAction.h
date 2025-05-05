@interface SASProximityInformationAction : SASProximityAction
@property (nonatomic) SASProximityInformation information;
- (id)init;
- (BOOL)hasResponse;
- (void).cxx_destruct;
- (id)information;
- (void)setInformation:;
- (id)responsePayload;
- (void)setResponseFromData:;
+ (unsigned long long)actionID;
@end

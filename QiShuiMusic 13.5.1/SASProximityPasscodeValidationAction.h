@interface SASProximityPasscodeValidationAction : SASProximityAction
@property (nonatomic) NSString passcode;
@property (nonatomic) BOOL passcodeValid;
- (BOOL)hasResponse;
- (id)passcode;
- (void).cxx_destruct;
- (void)setPasscode:;
- (id)responsePayload;
- (id)requestPayload;
- (void)setResponseFromData:;
- (BOOL)passcodeValid;
- (void)setPasscodeValid:;
+ (unsigned long long)actionID;
+ (id)actionFromDictionary:;
@end

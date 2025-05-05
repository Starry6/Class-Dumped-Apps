@interface DTFMutableSetting : NSObject
- (id)DTFInitRequestOperationType;
- (id)SMSCodeRequestOperationType;
- (id)SMSVerifyRequestOperationType;
- (id)backupURL;
- (id)bioAuthEngineVersion;
- (id)gatewayURL;
- (id)headConfig;
- (id)onlinePubKey;
- (id)testPubKey;
- (id)validateRequestOperationType;
- (id)zimOCRIdentifyRequestOperationType;
+ (id)getInstance;
@end

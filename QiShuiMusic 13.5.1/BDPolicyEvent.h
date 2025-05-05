@interface BDPolicyEvent : NSObject
@property (nonatomic) NSString eventType;
@property (nonatomic) <BDPrivacyCertProtocol> privacyCert;
@property (nonatomic) BDPrivacyCertValidateContext context;
@property (nonatomic) double timestamp;
@property (nonatomic) NSNumber costTime;
@property (nonatomic) NSError error;
@property (nonatomic) Q errorLevel;
@property (nonatomic) NSDictionary extraValidateInfo;
- (void)setPrivacyCert:;
- (id)costTime;
- (unsigned long long)errorLevel;
- (id)extraValidateInfo;
- (void)prepareToSend;
- (id)privacyCert;
- (void)setCostTime:;
- (void)setErrorLevel:;
- (void)setExtraValidateInfo:;
- (id)context;
- (void)setError:;
- (id)eventType;
- (void)setEventType:;
- (id)error;
- (void)setTimestamp:;
- (void).cxx_destruct;
- (double)timestamp;
- (void)setContext:;
@end

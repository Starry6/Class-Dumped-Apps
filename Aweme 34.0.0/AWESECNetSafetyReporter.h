@interface AWESECNetSafetyReporter : NSObject
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)_handleDetectEvent:;
- (void)_handleTTNetLogEvent:;
- (void)_logEvent:withError:;
- (void)prepareRelatedLog:;
- (void)_reportDetectEvent:;
- (void)_reportUniDetectEvent:;
- (void)_logDetectEvent:;
- (void)_reportDetectPerformance:;
- (id)interestLogRelated:;
- (id)reportParamsForURLRelatedLog:;
- (id)reportParamsForProtectAction:;
- (id)descForNetPart:;
- (void)_handleEvent:;
- (void)handleEvent:;
- (id)subscriberId;
@end

@interface AFMyriadInstrumentation : NSObject
- (id)init;
- (void).cxx_destruct;
- (void)logCDADeviceStateActivityStartedOrChanged:withTrigger:withCdaId:withTimestamp:;
- (void)logCDADeviceStateActivityEnded:withCdaId:withTimestamp:;
- (void)logCDAElectionAdvertisingStarted:withCdaId:withTimestamp:;
- (void)logCDAElectionAdvertisingStarting:withDelay:withInterval:withCdaId:withTimestamp:;
- (void)logCDAElectionAdvertisingEnded:withCdaId:withTimestamp:;
- (void)logCDAElectionAdvertisingEnding:withCdaId:withTimestamp:;
- (void)logCDAElectionTimerEnded:withCdaId:withTimestamp:;
- (void)logCDAElectionDecisionMade:withDecision:withPreviousDecision:timeSincePreviousDecision:withWinningDevice:withThisDevice:withParticipants:withRawScore:withBoost:withCdaId:currentRequestId:withTimestamp:;
- (void)logCDAElectionDecisionMadeDebug:withCrossDeviceArbitrationAllowed:advertisementData:withDeviceGroup:withCdaId:withTimestamp:;
- (void)_sendAndLogClientEvent:stState:atTimestamp:;
- (id)_boostTypeAsString:;
- (void)updateBoost:value:;
- (void)updateIsTrump:withReason:;
- (id)_createSchemaClientEvent:;
- (void)_logRequestLinkMessageRequestId:cdaId:;
@end

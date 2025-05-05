@interface VCLinkProbingResult : NSObject
@property (nonatomic) I reorderedPacketsCount;
@property (nonatomic) I sentRequestCount;
@property (nonatomic) I receivedResponseCount;
@property (nonatomic) NSMutableArray requestTimestampAndRTTList;
@property (nonatomic) NSNumber expMovMeanRTT;
@property (nonatomic) NSNumber plrEnvelopeValue;
@property (nonatomic) NSNumber plrTier;
- (void)dealloc;
- (id)description;
- (unsigned int)sentRequestCount;
- (id)initWithProbingResults:linkProbingResultConfig:;
- (void)mergeProbingResults:;
- (void)updateProbingResult:initialResult:;
- (void)updateLinkStatsWithArrivingNewValueMeanRTT:arrivingNewValuePLR:;
- (unsigned char)getPLRTierFromPLREnvelope:;
- (unsigned int)reorderedPacketsCount;
- (unsigned int)receivedResponseCount;
- (id)requestTimestampAndRTTList;
- (id)expMovMeanRTT;
- (id)plrEnvelopeValue;
- (id)plrTier;
@end

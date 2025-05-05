@interface SARDStartCorrectedServerRequest : SARDStartServerRequest
@property (nonatomic) NSString interactionIdToBeCorrected;
@property (nonatomic) NSString utteranceToBeCorrected;
- (id)groupIdentifier;
- (BOOL)requiresResponse;
- (id)encodedClassName;
- (id)interactionIdToBeCorrected;
- (void)setInteractionIdToBeCorrected:;
- (id)utteranceToBeCorrected;
- (void)setUtteranceToBeCorrected:;
@end

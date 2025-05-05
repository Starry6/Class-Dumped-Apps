@interface OPTTSMutableTextToSpeechRequestExperiment : OPTTSTextToSpeechRequestExperiment
@property (nonatomic) NSString experiment_identifier;
- (id)init;
- (id)copyWithZone:;
- (id)experiment_identifier;
- (void)setExperiment_identifier:;
@end

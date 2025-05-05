@interface SNDetectVoiceTriggerRequest : NSObject
@property (nonatomic) double sampleRate;
@property (nonatomic) q hopSizeSamples;
@property (nonatomic) q blocksBetweenTriggers;
@property (nonatomic) NSArray commands;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (double)sampleRate;
- (unsigned long long)hash;
- (id)commands;
- (void).cxx_destruct;
- (void)setCommands:;
- (BOOL)isEqual:;
- (id)createAnalyzerWithError:;
- (id)initWithModel:dictionary:error:;
- (long long)hopSizeSamples;
- (void)setHopSizeSamples:;
- (long long)blocksBetweenTriggers;
- (void)setBlocksBetweenTriggers:;
@end

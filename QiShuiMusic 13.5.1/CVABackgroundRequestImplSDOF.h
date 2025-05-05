@interface CVABackgroundRequestImplSDOF : CVABackgroundRequestImplBase
@property (nonatomic) float simulatedFocalRatio;
@property (nonatomic) float sourceColorGain;
@property (nonatomic) float sourceColorLux;
@property (nonatomic) NSDictionary sbufMetadata;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)sbufMetadata;
- (void).cxx_destruct;
- (void)setSbufMetadata:;
- (float)simulatedFocalRatio;
- (float)sourceColorGain;
- (float)sourceColorLux;
- (void)setSimulatedFocalRatio:;
- (void)setSourceColorGain:;
- (void)setSourceColorLux:;
@end

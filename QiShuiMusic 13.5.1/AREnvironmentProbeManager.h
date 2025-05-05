@interface AREnvironmentProbeManager : NSObject
@property (nonatomic) q mode;
- (id)initWithMode:;
- (BOOL)isBusy;
- (void).cxx_destruct;
- (id)_fullDescription;
- (long long)mode;
- (id).cxx_construct;
- (BOOL)_textureDataIsBusy;
- (void)insertIntoQueue:;
- (id)updateProbesForTimestamp:planes:imageData:pose:enableDirectTexturingForProbesWithIdentifier:;
- (void)updateProbesFromExistingAnchors:;
- (BOOL)addProbeWithAnchor:timestamp:textureImmediately:;
- (void)requestTextureForProbe:;
@end

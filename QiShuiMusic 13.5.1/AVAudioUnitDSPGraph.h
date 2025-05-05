@interface AVAudioUnitDSPGraph : AVAudioUnit
@property (nonatomic) NSURL dspGraphURL;
@property (nonatomic) NSURL auProcessingStripURL;
- (id)init;
- (BOOL)loadAudioDSPManager;
- (BOOL)loadDSPGraphAtURL:error:;
- (BOOL)loadAudioUnitProcessingStripAtURL:error:;
- (id)dspGraphURL;
- (id)auProcessingStripURL;
@end

@interface SAMICore_LoudNormProperty : NSObject
@property (nonatomic) float source_lufs;
@property (nonatomic) float source_peak;
@property (nonatomic) float target_lufs;
- (void)setSource_peak:;
- (void)setSource_lufs:;
- (void)setTarget_lufs:;
- (float)source_lufs;
- (float)source_peak;
- (float)target_lufs;
@end

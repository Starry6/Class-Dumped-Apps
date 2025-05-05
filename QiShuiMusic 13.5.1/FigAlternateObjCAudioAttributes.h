@interface FigAlternateObjCAudioAttributes : FigKVCInspectable
@property (nonatomic) NSArray formatIDs;
- (void)dealloc;
- (id)initWithFigAlternate:;
- (id)formatIDs;
- (long long)channelCountForMediaOption:;
- (BOOL)isBinauralMediaOption:;
- (BOOL)isDownmixMediaOption:;
- (double)sampleRateForMediaOption:;
@end

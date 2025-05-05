@interface AXMSynthPatch : NSObject
@property (nonatomic) NSArray harmonicInfos;
- (void)dealloc;
- (void).cxx_destruct;
- (id)initWithHarmonics:;
- (void)setHarmonicInfos:;
- (double)waveformValueForPhase:frequency:amplitude:;
- (id)harmonicInfos;
+ (id)defaultPatch;
+ (id)sinePatch;
+ (id)squarePatch;
+ (id)trianglePatch;
+ (id)sawPatch;
+ (id)violinPatch;
+ (id)trapeziumPatch;
@end

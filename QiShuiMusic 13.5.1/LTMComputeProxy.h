@interface LTMComputeProxy : NSObject
@property (nonatomic) ^{sCLRProcHITHStat=I[6S]SSIISSSSSSSSCSI^vII^vII^vIIIIIII} procHITHStat;
@property (nonatomic) ^{sRefDriverInputs=BSI(uBTColorEntry16=S{uBT88=CC})(uBTColorEntry16=S{uBT88=CC})ffSSSSIfSBCCI(uBTColorEntry16=S{uBT88=CC})fBCBBffff[512S]f{sBTRect=iiII}{sAWBColorCorrectionMatrix_local=[9(uBTColorEntry16=S{uBT88=CC})]}B{sBTRGGB16=(uBTColorEntry16=S{uBT88=CC})(uBTColorEntry16=S{uBT88=CC})(uBTColorEntry16=S{uBT88=CC})(uBTColorEntry16=S{uBT88=CC})}{sBTRGGB16=(uBTColorEntry16=S{uBT88=CC})(uBTColorEntry16=S{uBT88=CC})(uBTColorEntry16=S{uBT88=CC})(uBTColorEntry16=S{uBT88=CC})}{sBTRGGB16=(uBTColorEntry16=S{uBT88=CC})(uBTColorEntry16=S{uBT88=CC})(uBTColorEntry16=S{uBT88=CC})(uBTColorEntry16=S{uBT88=CC})}IC{sFaceInfo=[10{sCIspFDRect=iiII}]I}} driverInputs;
@property (nonatomic) ^f LTC;
@property (nonatomic) ^f globalLUT;
@property (nonatomic) ^f rgbToneCurve;
@property (nonatomic) ^f spatialCCM;
- (id)init;
- (void)dealloc;
- (int)allocateResources;
- (int)process;
- (void).cxx_destruct;
- (int)purgeResources;
- (id)initWithMetalContext:;
- (int)prewarmShaders;
- (id)LTC;
- (id)globalLUT;
- (id)rgbToneCurve;
- (id)spatialCCM;
- (id)procHITHStat;
- (void)setProcHITHStat:;
- (id)driverInputs;
- (void)setDriverInputs:;
- (void)setSpatialCCM:;
@end

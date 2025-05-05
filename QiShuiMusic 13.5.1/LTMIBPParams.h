@interface LTMIBPParams : NSObject
@property (nonatomic) NSDictionary validBufferRect;
@property (nonatomic) NSInteger optimizationLevel;
@property (nonatomic) BOOL calcGlobalHistOnROI;
@property (nonatomic) BOOL digitalFlash;
@property (nonatomic) NSDictionary inMetaData;
@property (nonatomic) <MTLTexture> inRGBImageUInt16Tex;
@property (nonatomic) NSDictionary outMetaData;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void).cxx_destruct;
- (void)reset;
- (void)setOptimizationLevel:;
- (int)optimizationLevel;
- (BOOL)digitalFlash;
- (void)setDigitalFlash:;
- (id)validBufferRect;
- (void)setValidBufferRect:;
- (BOOL)calcGlobalHistOnROI;
- (void)setCalcGlobalHistOnROI:;
- (id)inMetaData;
- (void)setInMetaData:;
- (id)inRGBImageUInt16Tex;
- (void)setInRGBImageUInt16Tex:;
- (id)outMetaData;
- (void)setOutMetaData:;
@end

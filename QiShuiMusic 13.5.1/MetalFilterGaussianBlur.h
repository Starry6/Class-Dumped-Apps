@interface MetalFilterGaussianBlur : MetalFilterDefault
@property (nonatomic) float mSigma;
@property (nonatomic) NSInteger mBlurRadius;
@property (nonatomic) NSMutableArray mGaussiansWeights;
@property (nonatomic) BOOL mIsGaussianWeightsSet;
@property (nonatomic) float mTexelWidthOffset;
@property (nonatomic) float mTexelHeightOffset;
@property (nonatomic) float mGaussianAlpha;
@property (nonatomic) NSLock mEffectParamsSetLock;
@property (nonatomic) float mBaseResolution;
@property (nonatomic) float mScaleRatio;
@property (nonatomic) float mTextureWidth;
@property (nonatomic) float mTextureHeight;
- (float)mBaseResolution;
- (void)setMBlurRadius:;
- (void)setMScaleRatio:;
- (void)generateUniformBuffer;
- (id)getEffectPatameterStr;
- (id)getFragmentShader;
- (double)getGaussianWeight:pos:;
- (id)mEffectParamsSetLock;
- (float)mGaussianAlpha;
- (id)mGaussiansWeights;
- (BOOL)mIsGaussianWeightsSet;
- (float)mScaleRatio;
- (float)mSigma;
- (float)mTexelHeightOffset;
- (float)mTexelWidthOffset;
- (float)mTextureHeight;
- (float)mTextureWidth;
- (long long)renderBefore:frame:;
- (void)setMBaseResolution:;
- (void)setMEffectParamsSetLock:;
- (void)setMGaussianAlpha:;
- (void)setMGaussiansWeights:;
- (void)setMIsGaussianWeightsSet:;
- (void)setMSigma:;
- (void)setMTexelHeightOffset:;
- (void)setMTexelWidthOffset:;
- (void)setMTextureHeight:;
- (void)setMTextureWidth:;
- (void)updateGaussianWights:;
- (void)setValue:forKey:;
- (id)process:;
- (void)setEffect:;
- (void).cxx_destruct;
- (id)initWithDictionary:index:;
- (int)mBlurRadius;
@end

@interface IESECLiveGoodsProgressBarModel : MTLModel
@property (nonatomic) IESECLiveTextElementModel progressText;
@property (nonatomic) IESECLiveImageURLModel atmosphereIcon;
@property (nonatomic) IESECLiveImageURLModel progressTextureImage;
@property (nonatomic) NSNumber progressPercent;
@property (nonatomic) NSString backgroundColor;
@property (nonatomic) NSArray progressColors;
@property (nonatomic) IESECLiveCountDownElementModel countDownInfo;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)atmosphereIcon;
- (id)countDownInfo;
- (id)progressColors;
- (id)progressText;
- (id)progressTextureImage;
- (void)setAtmosphereIcon:;
- (void)setCountDownInfo:;
- (void)setProgressColors:;
- (void)setProgressTextureImage:;
- (void)setBackgroundColor:;
- (id)backgroundColor;
- (id)progressPercent;
- (void)setProgressPercent:;
- (void).cxx_destruct;
- (void)setProgressText:;
+ (id)JSONKeyPathsByPropertyKey;
@end

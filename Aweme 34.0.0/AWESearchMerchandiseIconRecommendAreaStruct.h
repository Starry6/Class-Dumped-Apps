@interface AWESearchMerchandiseIconRecommendAreaStruct : AWEBaseApiModel
@property (nonatomic) AWESearchMerchandiseIconStruct iconLeft;
@property (nonatomic) AWESearchMerchandiseTextStruct tag;
@property (nonatomic) AWESearchMerchandiseTextStruct mainInfo;
@property (nonatomic) AWESearchMerchandiseTextStruct extraInfo;
@property (nonatomic) NSString schema;
@property (nonatomic) BOOL isShowArrow;
@property (nonatomic) AWESearchMerchandiseBackgroundColorModel bgConfig;
@property (nonatomic) AWESearchMerchandiseIconRecommendAreaLogInfo logInfo;
- (id)logInfo;
- (void)setLogInfo:;
- (id)iconLeft;
- (void)setIconLeft:;
- (id)mainInfo;
- (void)setMainInfo:;
- (BOOL)isShowArrow;
- (void)setIsShowArrow:;
- (id)bgConfig;
- (void)setBgConfig:;
- (id)schema;
- (id)tag;
- (void)setSchema:;
- (void)setTag:;
- (void).cxx_destruct;
- (id)extraInfo;
- (void)setExtraInfo:;
+ (id)JSONKeyPathsByPropertyKey;
@end

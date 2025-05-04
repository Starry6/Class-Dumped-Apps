@interface AWEDanmakuSettingsConfigModel : NSObject
@property (nonatomic) NSString title;
@property (nonatomic) NSString info;
@property (nonatomic) q pointCount;
@property (nonatomic) double valuePercent;
@property (nonatomic) q index;
@property (nonatomic) Q danmakuScene;
@property (nonatomic) @? responseContinueValueBlock;
@property (nonatomic) @? responseDiscreteValueBlock;
- (void)setDanmakuScene:;
- (unsigned long long)danmakuScene;
- (double)valuePercent;
- (id)responseDiscreteValueBlock;
- (id)responseContinueValueBlock;
- (void)setValuePercent:;
- (void)setResponseContinueValueBlock:;
- (void)setResponseDiscreteValueBlock:;
- (void)setIndex:;
- (long long)index;
- (void)setInfo:;
- (id)info;
- (void).cxx_destruct;
- (id)title;
- (void)setTitle:;
- (long long)pointCount;
- (void)setPointCount:;
@end

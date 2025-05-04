@interface AWESearchMerchandiseCommonProp : AWEBaseApiModel
@property (nonatomic) AWESearchMerchandiseClickAction clickAction;
@property (nonatomic) AWESearchMerchandiseBackgroundConfig backgroundConfig;
@property (nonatomic) NSDictionary logInfo;
@property (nonatomic) AWESearchMerchandiseRegionInfo regionInfo;
- (id)clickAction;
- (void)setClickAction:;
- (id)logInfo;
- (void)setLogInfo:;
- (id)backgroundConfig;
- (void)setBackgroundConfig:;
- (id)regionInfo;
- (void).cxx_destruct;
- (void)setRegionInfo:;
+ (id)JSONKeyPathsByPropertyKey;
@end

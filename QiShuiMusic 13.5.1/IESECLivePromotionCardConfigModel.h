@interface IESECLivePromotionCardConfigModel : NSObject
@property (nonatomic) NSDictionary UIConfig;
@property (nonatomic) NSArray elementLayoutArray;
@property (nonatomic) IESECLivePromotionCardBTMModel BTMModel;
@property (nonatomic) q cardScene;
- (id)BTMModel;
- (id)UIConfig;
- (long long)cardScene;
- (id)elementLayoutArray;
- (void)setBTMModel:;
- (void)setCardScene:;
- (void)setElementLayoutArray:;
- (void)setUIConfig:;
- (void).cxx_destruct;
@end

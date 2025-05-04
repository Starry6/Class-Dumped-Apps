@interface AWECodeGenDanmakuStyleModel : AWEBaseDataModel
@property (nonatomic) q source;
@property (nonatomic) AWECodeGenDanmakuTextStyleModel textStyleModel;
@property (nonatomic) AWECodeGenDanmakuIconStyleModel iconStyleModel;
- (id)textStyleModel;
- (void)setTextStyleModel:;
- (id)iconStyleModel;
- (void)setIconStyleModel:;
- (void).cxx_destruct;
- (long long)source;
- (void)setSource:;
+ (id)JSONKeyPathsByPropertyKey;
@end

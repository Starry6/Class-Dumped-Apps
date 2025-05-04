@interface AWECodeGenGameTagSetModel : AWEBaseDataModel
@property (nonatomic) BOOL isGame;
@property (nonatomic) AWECodeGenGameTagInfoModel gameNameTagModel;
@property (nonatomic) AWECodeGenContentTypeTagInfoModel contentTypeTagModel;
- (BOOL)isGame;
- (void)setIsGame:;
- (id)gameNameTagModel;
- (id)contentTypeTagModel;
- (void)setGameNameTagModel:;
- (void)setContentTypeTagModel:;
- (void).cxx_destruct;
+ (id)JSONKeyPathsByPropertyKey;
@end

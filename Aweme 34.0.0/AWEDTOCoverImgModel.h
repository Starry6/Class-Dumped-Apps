@interface AWEDTOCoverImgModel : MTLModel
@property (nonatomic) AWEDTOAigcTemplateCoverImg aigcTemplateCoverImg;
@property (nonatomic) AWEDTOAigcLoraCoverImgModel aigcLoraCoverImgModel;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)aigcTemplateCoverImg;
- (void)setAigcTemplateCoverImg:;
- (id)aigcLoraCoverImgModel;
- (void)setAigcLoraCoverImgModel:;
- (void).cxx_destruct;
+ (id)aigcTemplateCoverImgJSONTransformer;
+ (id)aigcLoraCoverImgModelJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
@end

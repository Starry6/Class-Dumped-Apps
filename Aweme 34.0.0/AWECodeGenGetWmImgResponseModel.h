@interface AWECodeGenGetWmImgResponseModel : AWEBaseResponseModel
@property (nonatomic) NSInteger code;
@property (nonatomic) AWECodeGenWmImgDataModel dataModel;
- (int)code;
- (void)setCode:;
- (void).cxx_destruct;
- (id)dataModel;
- (void)setDataModel:;
+ (id)JSONKeyPathsByPropertyKey;
@end

@interface AWECodeGenAdditionalInfoModel : AWEBaseDataModel
@property (nonatomic) q type;
@property (nonatomic) AWECodeGenAdditionalDiggModel diggModel;
@property (nonatomic) AWECodeGenAdditionalCommentModel commentModel;
- (id)commentModel;
- (void)setCommentModel:;
- (id)diggModel;
- (void)setDiggModel:;
- (long long)type;
- (void)setType:;
- (void).cxx_destruct;
+ (id)JSONKeyPathsByPropertyKey;
@end

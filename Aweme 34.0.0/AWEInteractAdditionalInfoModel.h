@interface AWEInteractAdditionalInfoModel : AWEBaseApiModel
@property (nonatomic) Q type;
@property (nonatomic) AWEInteractAdditionalDiggModel additionalDigg;
@property (nonatomic) AWEInteractAdditionalCommentModel additionalComment;
- (id)additionalDigg;
- (id)additionalComment;
- (void)setAdditionalDigg:;
- (void)setAdditionalComment:;
- (unsigned long long)type;
- (void)setType:;
- (void).cxx_destruct;
+ (id)additionalDiggJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
@end

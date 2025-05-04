@interface AWECodeGenContentResourceModel : AWEBaseDataModel
@property (nonatomic) AWECodeGenIMStickerModel stickerModel;
@property (nonatomic) NSArray imageListModelArray;
@property (nonatomic) AWECodeGenCommentAudioModel commentAudioModel;
- (id)commentAudioModel;
- (void)setCommentAudioModel:;
- (id)stickerModel;
- (void)setStickerModel:;
- (id)imageListModelArray;
- (void)setImageListModelArray:;
- (void).cxx_destruct;
+ (id)propertyToModelClassInArrayMap;
+ (id)JSONKeyPathsByPropertyKey;
@end

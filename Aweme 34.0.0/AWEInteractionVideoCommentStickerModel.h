@interface AWEInteractionVideoCommentStickerModel : AWEInteractionStickerModel
@property (nonatomic) ACCVideoReplyCommentModel commentModel;
@property (nonatomic) NSString stickerConfig;
- (id)commentModel;
- (void)setCommentModel:;
- (void)setStickerConfig:;
- (id)stickerConfig;
- (BOOL)nativeSticker;
- (void).cxx_destruct;
+ (id)commentModelJSONTransformer;
+ (id)convertFromReplyCommentModel:;
+ (id)convertFromCommentModel:;
+ (id)JSONKeyPathsByPropertyKey;
@end

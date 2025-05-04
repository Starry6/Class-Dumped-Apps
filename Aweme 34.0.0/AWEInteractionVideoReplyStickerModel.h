@interface AWEInteractionVideoReplyStickerModel : AWEInteractionStickerModel
@property (nonatomic) ACCVideoReplyModel videoReplyUserInfo;
- (id)videoReplyUserInfo;
- (void)setVideoReplyUserInfo:;
- (void).cxx_destruct;
+ (id)videoReplyUserInfoModelJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
@end

@interface AWEInteractionVideoShareStickerModel : AWEInteractionStickerModel
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
@property (nonatomic) AWEVideoShareInfoModel videoShareInfo;
@property (nonatomic) AWEVideoShareInfoModel postShareInfo;
- (id)afd_forwardAwemePopoverText;
- (id)afd_forwardAwemePreFetchAwemeID;
- (id)afd_forwardAwemePopoverJumpSchema:;
- (id)afd_forwardAwemePopoverEventParam;
- (id)videoShareInfo;
- (id)postShareInfo;
- (BOOL)afd_isShareCommentToStoryScene:;
- (id)afd_videoShareFindPreFetchAwemeIfNeeded;
- (id)afd_commonShareToStoryFindPreFetchAwemeIfNeeded;
- (BOOL)afd_hasShareTextWithAweme:;
- (void)setVideoShareInfo:;
- (void)setPostShareInfo:;
- (void).cxx_destruct;
+ (id)videoShareInfoJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
@end

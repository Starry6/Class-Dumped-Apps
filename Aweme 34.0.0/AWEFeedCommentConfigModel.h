@interface AWEFeedCommentConfigModel : AWEBaseApiModel
@property (nonatomic) NSString commentInputConfigText;
@property (nonatomic) BOOL authorChooseShowPartComment;
@property (nonatomic) AWEFeedCommentBarConfig barConfig;
@property (nonatomic) BOOL showCommentBottomInput;
@property (nonatomic) AWECommentPictureChallengeConfig pictureChallengeConfig;
@property (nonatomic) NSNumber commentScreenshotItemId;
- (BOOL)authorChooseShowPartComment;
- (id)commentInputConfigText;
- (id)pictureChallengeConfig;
- (void)setCommentInputConfigText:;
- (void)setAuthorChooseShowPartComment:;
- (id)barConfig;
- (void)setBarConfig:;
- (BOOL)showCommentBottomInput;
- (void)setShowCommentBottomInput:;
- (void)setPictureChallengeConfig:;
- (id)commentScreenshotItemId;
- (void)setCommentScreenshotItemId:;
- (void).cxx_destruct;
+ (id)barConfigJSONTransformer;
+ (id)pictureChallengeConfigJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
@end

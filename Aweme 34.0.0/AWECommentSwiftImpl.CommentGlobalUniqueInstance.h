@interface AWECommentSwiftImpl.CommentGlobalUniqueInstance : NSObject
@property (nonatomic) NSDictionary zeroCommentPostTrackParams;
@property (nonatomic) <AWEInteractionElementPopoverProtocol> interactionElementPopoverInstance;
@property (nonatomic) double multiImageInnerSlideStartStamp;
@property (nonatomic) q multiImageInnerSlideCnt;
- (void)pushComment:withItemID:;
- (void)trackPostComment:;
- (id)popCommentWithItemID:;
- (id)inputContentForItemID:commentID:;
- (void)setInputContent:forItemID:commentID:;
- (void)removeInputContentForItemID:commentID:;
- (void)setInteractionElementPopoverInstance:;
- (void)setMultiImageInnerSlideStartStamp:;
- (double)multiImageInnerSlideStartStamp;
- (long long)multiImageInnerSlideCnt;
- (void)setMultiImageInnerSlideCnt:;
- (void)drawScreenshot;
- (id)zeroCommentPostTrackParams;
- (void)setZeroCommentPostTrackParams:;
- (id)obtainCommentPostCommonParams;
- (id)obtainCommentMediaFeedTrackParams;
- (id)commentMediaFeedInteractionTrackParams:;
- (void)clearCommentPostCommonParams;
- (id)interactionElementPopoverInstance;
- (id)init;
- (void)dealloc;
- (void).cxx_destruct;
- (id)screenshotManager;
@end

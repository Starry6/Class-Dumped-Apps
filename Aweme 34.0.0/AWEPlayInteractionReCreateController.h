@interface AWEPlayInteractionReCreateController : AWEPlayInteractionBaseController
@property (nonatomic) BOOL shouldUploadPlayTime;
@property (nonatomic) q tagId;
@property (nonatomic) BOOL isDisplaying;
- (void)setIsDisplaying:;
- (void)setShouldUploadPlayTime:;
- (void)sendPlayTimeRequest;
- (void)uploadPlayTimeLater:;
- (void)refreshUploadStatus;
- (BOOL)shouldUploadPlayTime;
- (void)setData:;
- (void)viewWillAppear;
- (void)reset;
- (void)setTagId:;
- (long long)tagId;
- (BOOL)isDisplaying;
- (void)viewWillDisappear;
- (void)didEndDisplaying;
- (void)willDisplay;
@end

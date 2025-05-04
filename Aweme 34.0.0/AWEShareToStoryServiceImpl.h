@interface AWEShareToStoryServiceImpl : NSObject
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (BOOL)isInMainFeedTab;
- (BOOL)commentBubbleStyleEnable;
- (void)showInputViewWithStoryModel:trackParams:completion:;
- (BOOL)postscriptEnhanceStyleEnable;
- (void)styleJsonWithStoryModel:completion:;
- (void)commentShareBubbleStyleJsonWithStoryModel:middleImage:completion:;
- (void)quickShareWithShareToStoryModel:trackParams:;
- (id)shareToStoryModelWithAwemeModel:;
- (void)middleImageStyleJsonWithStoryModel:middleImage:completion:;
- (id)shareCommentImageToStoryModelWithAwemeModel:;
- (id)shareInfoContainerForShareSticker;
- (void)enhancePostscriptStyleJsonWithStoryModel:needPlaceholder:completion:;
- (BOOL)livePostscriptEnhanceStyleEnable;
- (void)liveEnhancePostscriptStyleJsonWithStoryModel:needPlaceholder:completion:;
- (void)showInputViewWithLiveStoryModel:trackParams:completion:;
- (BOOL)checkIfPlaceHolderExist:;
- (id)makePlaceHolderHidden:tag:;
- (id)makePlaceHolderHidden:;
- (void)styleJsonV2WithStoryModel:completion:;
- (void)getImageWithURLList:completion:;
- (void)showIronManInputViewWithStoryModel:trackParams:completion:;
- (void)styleJsonWithContent:publishModel:completion:;
- (id)recoverPostscriptPlaceHolder:;
@end

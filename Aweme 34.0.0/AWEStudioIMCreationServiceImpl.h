@interface AWEStudioIMCreationServiceImpl : NSObject
@property (nonatomic) <UIViewControllerTransitioningDelegate> transitionHost;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)startSelfieEmojiRecordWithExtraInfo:;
- (id)startIMMediaEdit:sourceModel:imModel:;
- (id)startStoryVideoWithInfo:fromShake:imModel:;
- (id)startStoryVideoWithStickerIDArray:musicModel:imModel:info:;
- (id)startStoryVideoWithStickerIDArray:musicModel:imModel:info:referString:;
- (void)requestPublishResultWithTaskID:completion:;
- (void)generateLivePhotoPairedResourceWithVideoFilePath:imageFilePath:completion:;
- (id)transitionHost;
- (void)setTransitionHost:;
- (void).cxx_destruct;
@end

@interface AWEQuickShareImageTask : AWEQuickShareTask
- (id)quickShareImageWithStoryModel:completion:;
- (id)quickShareImageWithStoryModel:completion:cancelBlock:;
- (void)quickShareImageWithStoryModel:completion:creationID:cancelBlock:;
- (BOOL)preCheckWithStoryModel:error:;
- (void)handleStoryImageWithURLList:shouldGetGradientInfo:storyModel:completion:;
- (void)handleBackgroundImageWithURLList:storyImage:useGradientBackground:storyModel:completion:;
- (void)initParameterizedCreationWithEditComposer:publishComposer:storyModel:;
- (BOOL)initCustomLayoutWithStoryModel:publishModel:error:;
- (void)dealloc;
- (void)start;
@end

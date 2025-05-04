@interface AWECanvasVideoCreator : NSObject
@property (nonatomic) AWEVideoPublishViewModel publishModel;
@property (nonatomic) @? customerTransitioningSetting;
- (id)publishModel;
- (void)setPublishModel:;
- (void)setCustomerTransitioningSetting:;
- (id)customerTransitioningSetting;
- (void)configPublishModel:;
- (id)localMusicAssetForURL:;
- (void)updatePublishModelForDetailMusic:;
- (void)exportVideoWithImage:beforeEnterNextPage:completionBlock:cancelBlock:;
- (void)exportVideoWithLocalVideoURL:musicModel:beforeEnterNextPage:completionBlock:cancelBlock:;
- (void)openEditor:cancelBlock:;
- (void)exportVideoWithImage:beforeEnterNextPage:completionBlock:;
- (void)exportVideoWithLocalVideoURL:musicModel:beforeEnterNextPage:completionBlock:;
- (void).cxx_destruct;
@end

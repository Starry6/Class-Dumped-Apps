@interface AWEPCTTransitionTaskCreator : NSObject
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
+ (id)createTaskWithContext:;
+ (void)trackShowCameraWithPublishModel:;
+ (long long)sceneWithApiModel:;
+ (void)transitionWithScene:context:finishHandler:;
+ (void)prepareDataForImageAlbumWithScene:context:;
+ (void)trackShootEditorWithPublishModel:;
+ (void)trackEnterPostPageWithPublishModel:;
@end

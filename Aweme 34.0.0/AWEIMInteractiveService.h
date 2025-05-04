@interface AWEIMInteractiveService : HTSService
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)playAnimationWithResourceName:completion:;
- (void)playAnimationWithResourceName:onView:completion:;
- (BOOL)isAnimationResourceReady:;
- (id)commonResourceFilePath:;
- (void)lazyDownloadCommonResourceName:complete:;
- (id)emoticonModelsWithName:;
@end

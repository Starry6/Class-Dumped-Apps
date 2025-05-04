@interface AWELandscapeUtil : NSObject
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
+ (BOOL)enableAuthorDanmakuInModel:;
+ (id)formateDuration:;
+ (id)formateCount:;
+ (id)transToAWEAwemePlayVideoVCIfNeeded:;
+ (BOOL)confirmIsPortraitVideo:;
+ (id)landscapeTitleWithModel:pageContext:containNewlineCharacter:;
+ (id)screenModeStatusWithInteractionViewState:;
+ (id)videoControllerFrameWithModel:containerFrame:;
+ (id)playerControllerFrameWithPlayerView:containerView:model:;
+ (id)accessibilityDuration:;
+ (void)prefetchCoverImageWithModel:;
+ (id)landscapeTitleWithModel:pageContext:;
+ (long long)scaleModeForVideoWithModel:;
+ (BOOL)shouldShowMixButtonWithModel:pageContext:;
@end

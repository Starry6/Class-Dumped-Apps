@interface IESLiveInteractDynamicEffectComponent : IESLiveInteractComponentBase
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)addVideoDecorationToPreviewWithEffectModel:;
- (void)componentBindContext;
- (BOOL)isVideoDecorationAddedToPreviewWithEffectModel:;
- (void)playAnimationInFullScreenContainerWithSize:URL:completion:;
- (void)playEmojiAnimationInSeatOfUser:URL:completion:;
- (void)removeVideoDecorationFromPreviewWithEffectModel:;
@end

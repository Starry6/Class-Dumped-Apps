@interface AWEDanmakuEggAnimationView : UIView
@property (nonatomic) IESLiveVideoGiftController giftController;
@property (nonatomic) @? alphaPlayerCompletionBlock;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)didFinishPlayingWithError:;
- (void)setGiftController:;
- (id)giftController;
- (void)setAlphaPlayerCompletionBlock:;
- (id)alphaPlayerCompletionBlock;
- (void)showEggLottieWithLottiePath:lottieRatio:completion:;
- (void)showAlphaPlayerWithPath:danmakuSceneType:completion:;
- (void)stopAlphaPlayerIfNeed;
- (void).cxx_destruct;
@end

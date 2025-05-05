@interface IESECShopProductsVideoControl : NSObject
@property (nonatomic) IESECShopProductsPlayableTask task;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)skipCurrentTask;
- (void)playWithTask:;
- (void)playerController:playbackStateDidChange:;
- (void)playerController:updateCurrent:duration:;
- (void)videoReadyToDisplayOfPlayerController:;
- (id)init;
- (id)task;
- (void).cxx_destruct;
- (void)stopPlaying;
@end

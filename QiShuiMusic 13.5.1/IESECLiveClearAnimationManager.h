@interface IESECLiveClearAnimationManager : NSObject
@property (nonatomic) q referenceCount;
@property (nonatomic) IESECLiveContext liveContext;
@property (nonatomic) <IESECLiveClearAnimationDelegate> delegate;
- (void)setLiveContext:;
- (void)handleEnterGoodsDetail;
- (void)handleFullScreen:;
- (void)handleHalfScreen;
- (void)handleNormalScreen;
- (void)handleQuitGoodsDetail;
- (id)initWithDelegate:liveContext:;
- (id)liveContext;
- (void)dealloc;
- (void)setDelegate:;
- (id)delegate;
- (void).cxx_destruct;
- (long long)referenceCount;
- (void)setReferenceCount:;
@end

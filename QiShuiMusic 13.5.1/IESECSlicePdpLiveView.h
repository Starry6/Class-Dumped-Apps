@interface IESECSlicePdpLiveView : IESECSliceXViewElementView
@property (nonatomic) IESECLivePlayer livePlayerView;
@property (nonatomic) IESECSliceXElement sliceXElement;
@property (nonatomic) NSString identifier;
@property (nonatomic) BOOL hasSetupPlayer;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)handleIESECSlicePdpLiveViewDidSlide:;
- (BOOL)hasSetupPlayer;
- (id)livePlayerView;
- (void)player:didReceiveError:;
- (void)player:loadStateDidChange:;
- (void)setHasSetupPlayer:;
- (void)setLivePlayerView:;
- (void)setSliceXElement:;
- (void)setupLivePlayerViewWith:;
- (id)sliceXElement;
- (BOOL)updateWithSliceXElement:error:;
- (void)dealloc;
- (id)identifier;
- (id)initWithContext:;
- (void).cxx_destruct;
- (void)setIdentifier:;
@end

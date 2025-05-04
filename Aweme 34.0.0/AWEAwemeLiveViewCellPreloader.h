@interface AWEAwemeLiveViewCellPreloader : NSObject
@property (nonatomic) HTSLiveStreamPlayer streamPlayer;
@property (nonatomic) IESLiveNewPlayerFactory playerFactory;
@property (nonatomic) UIView containerView;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)cancelPreloadPlayerStream;
- (void)tryPreloadPlayerStreamWithRoomModel:containerView:;
- (id)streamPlayer;
- (void)clearPreloadPlayer;
- (void)setStreamPlayer:;
- (void)tryPreloadPlayerStreamWithRoomModel:player:containerView:;
- (id)streamPlayerGetCurrentRoomModel;
- (void)setPlayerFactory:;
- (id)containerView;
- (void)setContainerView:;
- (void).cxx_destruct;
- (id)playerFactory;
@end

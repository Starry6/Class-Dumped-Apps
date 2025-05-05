@interface IESECMallLivePlayerV2 : UIView
@property (nonatomic) IESECLivePlayer livePlayer;
@property (nonatomic) <IESECMallLiveDelegate> delegate;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)player:didReceiveError:;
- (void)player:loadStateDidChange:;
- (void)setDelegate:;
- (id)delegate;
- (void).cxx_destruct;
- (id)livePlayer;
- (void)setLivePlayer:;
@end

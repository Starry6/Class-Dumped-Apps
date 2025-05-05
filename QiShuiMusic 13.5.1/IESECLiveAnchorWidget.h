@interface IESECLiveAnchorWidget : IESECLiveBaseWidget
@property (nonatomic) BOOL appeared;
@property (nonatomic) IESECLiveApi api;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)p_postScreenShotImageURLWithID:;
- (id)initWithRoom:roomContext:;
- (void)messageReceived_IESECLiveCommonMessage:;
- (id)p_obtainImageFromView:;
- (id)p_takeScreenShot;
- (void).cxx_destruct;
- (void)messageReceived:;
- (BOOL)appeared;
- (void)setAppeared:;
- (id)api;
- (void)setApi:;
@end

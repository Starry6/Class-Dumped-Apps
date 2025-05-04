@interface AWEMVChannelPlayerCardElementContainer : AWEElementContainer
@property (nonatomic) UIView<AWEMVChannelPlayerCardContainerProtocol> container;
- (void)player:updatePlayTime:canPlayTime:totalTime:;
- (void)setContainer:;
- (id)container;
- (void).cxx_destruct;
@end

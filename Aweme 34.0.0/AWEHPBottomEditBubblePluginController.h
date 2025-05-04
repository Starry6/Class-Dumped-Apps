@interface AWEHPBottomEditBubblePluginController : NSObject
@property (nonatomic) <AWEHPChannelControllerProtocol> channelController;
@property (nonatomic) NSString topTipBubbleText;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)channelController;
- (void)setChannelController:;
- (void)channelTopTabContainerDidAppear;
- (void)topTabScrollDidReachStableEnd;
- (id)bubbleComponentID;
- (void)p_tryShowBubble;
- (id)topTipBubbleText;
- (void)setTopTipBubbleText:;
- (void).cxx_destruct;
- (id)initWithController:;
+ (BOOL)channelAllowInjectToController:;
@end

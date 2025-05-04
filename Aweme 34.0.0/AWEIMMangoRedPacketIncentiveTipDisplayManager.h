@interface AWEIMMangoRedPacketIncentiveTipDisplayManager : NSObject
@property (nonatomic) UIView redPacketIncentiveTipView;
@property (nonatomic) <IESIMConversationProtocol> conversation;
@property (nonatomic) Q scene;
@property (nonatomic) NSString enterFrom;
@property (nonatomic) AWEIMMangoRedPacketIncentiveTipViewConfig viewConfig;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)setEnterFrom:;
- (id)enterFrom;
- (id)viewConfig;
- (void)setViewConfig:;
- (void)p_trackEvent:;
- (id)initWithConversation:enterFrom:scene:;
- (void)p_createAndBindView;
- (void)setRedPacketIncentiveTipView:;
- (id)redPacketIncentiveTipView;
- (id)p_sceneActivityName;
- (void)updateRedPacketIncentiveTipView;
- (void)trackDidClickButton;
- (void)setScene:;
- (unsigned long long)scene;
- (void).cxx_destruct;
- (id)conversation;
- (void)setConversation:;
@end

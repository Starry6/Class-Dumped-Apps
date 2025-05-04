@interface AWEIMMixMangoRedPacketIncentiveManager : NSObject
@property (nonatomic) <AWEIMMangoRedPacketIncentiveTipDisplayManagerProtocol> mangoRedPacketIncentiveTipDisplayManager;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)redPacketIncentiveTipView;
- (void)updateRedPacketIncentiveTipView;
- (void)trackDidClickButton;
- (void)setMangoRedPacketIncentiveTipDisplayManager:;
- (id)mangoRedPacketIncentiveTipDisplayManager;
- (void)mangoRedPacketIncentiveTipDisplayManagerWithConversationID:enterFrom:;
- (void).cxx_destruct;
- (void)dismissViewController;
+ (id)sharedInstance;
@end

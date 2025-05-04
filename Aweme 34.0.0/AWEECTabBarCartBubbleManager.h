@interface AWEECTabBarCartBubbleManager : NSObject
@property (nonatomic) AWEECCTabBarCartBubbleTriggerDataModel dataModel;
@property (nonatomic) BOOL bubbleShowed;
@property (nonatomic) <AWEECTabBarBubbleNReddotProtocol> bubbleHandler;
@property (nonatomic) NSDictionary extraBizParams;
- (id)extraBizParams;
- (void)registerBubbleHandler:;
- (id)getHPChannelBubble;
- (void)recordBubbleShow;
- (void)recordBubbleClick;
- (id)getTabBarBadgeModel;
- (BOOL)bubbleShowed;
- (void)showOldBadgeIfNeeded;
- (void)recordBubbleResp:;
- (id)bubbleHandler;
- (id)getRecordedBubbleResp;
- (void)setBubbleShowed:;
- (id)prepareBaseTrackParams;
- (void)clearRecordedBubbleResp;
- (void)setBubbleHandler:;
- (void).cxx_destruct;
- (void)initManager;
- (id)dataModel;
- (void)setDataModel:;
+ (id)sharedManager;
@end

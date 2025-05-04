@interface AWEHPCaptionBubbleManager : NSObject
@property (nonatomic) AWEHPChannelCaptionBubbleTask currentTask;
@property (nonatomic) <AWEPzEngineProtocol> engine;
- (id)currentCaptionBubbleTask;
- (id)createCaptionBubbleTask;
- (void)tryShowCaptionBubbleWithTask:canShowCallBack:;
- (id)engine;
- (id)currentTask;
- (void)setCurrentTask:;
- (void)setEngine:;
- (void).cxx_destruct;
+ (id)sharedInstance;
@end

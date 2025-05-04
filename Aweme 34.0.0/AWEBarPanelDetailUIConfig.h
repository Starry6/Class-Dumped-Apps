@interface AWEBarPanelDetailUIConfig : NSObject
@property (nonatomic) AWEBarPanelDetailBottomUIConfig bottomConfig;
@property (nonatomic) AWEBarPanelVCPanelUIConfig panelConfig;
- (id)bottomConfig;
- (id)panelConfig;
- (void)setBottomConfig:;
- (void)setPanelConfig:;
- (id)init;
- (void).cxx_destruct;
+ (id)defaultWatchLaterConfig;
+ (id)finishWatchLaterConfig;
@end

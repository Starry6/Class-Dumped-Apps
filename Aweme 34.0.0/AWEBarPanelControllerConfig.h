@interface AWEBarPanelControllerConfig : NSObject
@property (nonatomic) AWEBarPanelDetailConfigModel detailConfig;
@property (nonatomic) AWEBarPanelDetailUIConfig uiConfig;
- (id)uiConfig;
- (void)setUiConfig:;
- (id)detailConfig;
- (void)setDetailConfig:;
- (id)init;
- (void).cxx_destruct;
@end

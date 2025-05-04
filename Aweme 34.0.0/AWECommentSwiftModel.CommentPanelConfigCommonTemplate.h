@interface AWECommentSwiftModel.CommentPanelConfigCommonTemplate : NSObject
@property (nonatomic) <AWECommentPanelHeaderConfigurationProtocol> headerConfig;
@property (nonatomic) <AWECommentPanelTabConfigurationProtocol> tabConfig;
@property (nonatomic) <AWECommentPanelCoreContentConfigurationProtocol> coreContentConfig;
@property (nonatomic) <AWECommentPanelLongPressConfigurationProtocol> longPressConfig;
@property (nonatomic) <AWECommentPanelMediaFeedConfigurationProtocol> mediaFeedConfig;
@property (nonatomic) <AWECommentPanelInputViewConfigurationProtocol> inputConfig;
- (id)mediaFeedConfig;
- (void)setMediaFeedConfig:;
- (id)headerConfig;
- (void)setHeaderConfig:;
- (id)tabConfig;
- (void)setTabConfig:;
- (id)coreContentConfig;
- (void)setCoreContentConfig:;
- (id)longPressConfig;
- (void)setLongPressConfig:;
- (id)inputConfig;
- (void)setInputConfig:;
- (id)init;
- (void).cxx_destruct;
@end

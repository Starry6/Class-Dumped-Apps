@interface AWECommentPanelConfig : NSObject
@property (nonatomic) AWECommentPanelTabConfigModel tabConfigModel;
@property (nonatomic) AWECommentPanelCoreContentConfigModel coreContentConfigModel;
@property (nonatomic) AWECommentPanelHeaderConfigModel headerConfigModel;
@property (nonatomic) AWECommentPanelLongPressConfigModel longPressPanelConfigModel;
@property (nonatomic) AWECommentPanelMediaFeedConfigModel mediaFeedConfigModel;
@property (nonatomic) AWECommentPanelInputViewConfigModel inputViewConfigModel;
- (id)tabConfigModel;
- (id)coreContentConfigModel;
- (id)headerConfigModel;
- (id)longPressPanelConfigModel;
- (id)mediaFeedConfigModel;
- (id)inputViewConfigModel;
- (void)setMediaFeedConfigModel:;
- (void)setTabConfigModel:;
- (void)setCoreContentConfigModel:;
- (void)setHeaderConfigModel:;
- (void)setLongPressPanelConfigModel:;
- (void)setInputViewConfigModel:;
- (void).cxx_destruct;
@end

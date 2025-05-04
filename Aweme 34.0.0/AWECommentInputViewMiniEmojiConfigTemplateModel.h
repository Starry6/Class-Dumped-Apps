@interface AWECommentInputViewMiniEmojiConfigTemplateModel : NSObject
@property (nonatomic) Q miniEmojiPanelType;
@property (nonatomic) NSArray dataSource;
@property (nonatomic) BOOL disableMultiTab;
@property (nonatomic) BOOL needHideBottomView;
- (void)setNeedHideBottomView:;
- (unsigned long long)miniEmojiPanelType;
- (BOOL)disableMultiTab;
- (BOOL)needHideBottomView;
- (void)setMiniEmojiPanelType:;
- (void)setDisableMultiTab:;
- (void).cxx_destruct;
- (void)setDataSource:;
- (id)dataSource;
@end

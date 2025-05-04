@interface AWEProfileBaseHeaderSectionViewModel : AWEBaseListSectionViewModel
@property (nonatomic) AWEProfileBaseContainerContext context;
@property (nonatomic) BOOL showTabBubble;
@property (nonatomic) NSString tabBubbleText;
@property (nonatomic) q tabBubbleIndex;
@property (nonatomic) BOOL isNeedShowCellBackgroundStatus;
@property (nonatomic) BOOL isNewFullScreenStyle;
- (void)setIsNeedShowCellBackgroundStatus:;
- (void)setTabBubbleText:;
- (void)setTabBubbleIndex:;
- (void)setShowTabBubble:;
- (BOOL)isNewFullScreenStyle;
- (BOOL)isNeedShowCellBackgroundStatus;
- (void)setIsNewFullScreenStyle:;
- (BOOL)showTabBubble;
- (id)tabBubbleText;
- (long long)tabBubbleIndex;
- (void)setContext:;
- (void).cxx_destruct;
- (id)context;
- (void)updateWithContext:;
+ (id)viewModel;
@end

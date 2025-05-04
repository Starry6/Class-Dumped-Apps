@interface AWEIpadShareService : HTSService
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)remakeTitleViewMas:containerView:centerOffset:;
- (void)setFrame:forView:;
- (void)remakeViewMas:;
- (id)IPadIMShareMultiSelectViewControllerWithMutiselectViewControllerConfig:sharePanelContainer:;
- (BOOL)dismissView:completion:;
- (double)shareIMSeprateLineRightMargin;
- (id)showPanelWithTask:shareButton:presenterVC:;
- (id)IPadIMShareMultiSelectViewControllerWithContext:shareModels:dataSource:isBGColorWhite:titleAttributedText:hasMore:sharePanleContainer:;
- (void)performUpdatePureModeWithBlock:;
@end

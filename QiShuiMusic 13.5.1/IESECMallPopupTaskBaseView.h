@interface IESECMallPopupTaskBaseView : UIView
@property (nonatomic) q zIndex;
@property (nonatomic) IESECMallPopupConfig popupConfig;
@property (nonatomic) UIView parentView;
@property (nonatomic) <IESECMallPopupDelegate> delegate;
@property (nonatomic) NSString uniqueId;
@property (nonatomic) @? dismissCallback;
- (void)setPopupConfig:;
- (id)dismissCallback;
- (id)currentListContextIdForCards;
- (id)initWithPopupConfig:delegate:uniqueId:;
- (id)popupConfig;
- (void)setDismissCallback:;
- (void)showInView:zIndex:;
- (void)showInWindowWithZIndex:;
- (void)dismiss;
- (id)uniqueId;
- (void)setDelegate:;
- (void)setUniqueId:;
- (void)setZIndex:;
- (id)delegate;
- (void).cxx_destruct;
- (long long)zIndex;
- (void)viewDidAppear;
- (id)parentView;
- (void)setParentView:;
- (void)viewDidDisappear;
@end

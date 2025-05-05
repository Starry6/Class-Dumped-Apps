@interface IESECMallFeedLoadingViewCell : UICollectionViewCell
@property (nonatomic) UIView<IESECUILoadingViewProtocol> loadingView;
@property (nonatomic) IESECMallErrorView errorView;
@property (nonatomic) NSDictionary curTabInfo;
@property (nonatomic) NSString nativeCellEnvIdentifier;
- (id)curTabInfo;
- (id)nativeCellEnvIdentifier;
- (void)setCurTabInfo:;
- (void)setNativeCellEnvIdentifier:;
- (void)layoutSubviews;
- (id)initWithFrame:;
- (void)updateData:;
- (void).cxx_destruct;
- (void)setupUI;
- (id)loadingView;
- (void)setLoadingView:;
- (id)errorView;
- (void)setErrorView:;
@end

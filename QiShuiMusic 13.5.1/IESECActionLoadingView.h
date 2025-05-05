@interface IESECActionLoadingView : UIView
@property (nonatomic) UIView<IESECUILoadingViewProtocol> loadingView;
@property (nonatomic) UILabel noticeLabel;
@property (nonatomic) double progress;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)creatNoticeLabelWithType:isBlack:;
- (id)initWithLoadingType:isBlack:;
- (void)dismiss;
- (void)startAnimating;
- (void)stopAnimating;
- (void).cxx_destruct;
- (id)loadingView;
- (void)setLoadingView:;
- (id)noticeLabel;
- (void)setNoticeLabel:;
@end

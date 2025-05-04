@interface AWEVideoDraftBoxCollectionHeaderView : UIView
@property (nonatomic) AWEVideoDraftBoxCollectionViewController vc;
@property (nonatomic) AWEVideoDraftBoxCollectionDataSource dataSource;
@property (nonatomic) UILabel tipsLabel;
@property (nonatomic) UIButton closeTipsButton;
@property (nonatomic) <AWEVideoDraftBoxCollectionHeaderViewDelegate> delegate;
- (id)tipsLabel;
- (void)setTipsLabel:;
- (id)closeTipsButton;
- (void)closeTipsButtonAction:;
- (void)setCloseTipsButton:;
- (id)initWithDraftVC:dataSource:;
- (BOOL)isDidClickClosed;
- (void)setDidClickClosed;
- (id)delegate;
- (void).cxx_destruct;
- (void)setDataSource:;
- (void)setDelegate:;
- (id)dataSource;
- (id)vc;
- (void)setVc:;
- (id)tipContent;
@end

@interface AWEIMTaskPlatformDetailCardDetailStyleActivityCell : UITableViewCell
@property (nonatomic) AWEIMTaskPlatformDetailCardDetailActivityCellHeaderView headerView;
@property (nonatomic) AWEIMTaskPlatformDetailCardDetailActivityCellFooterView footerView;
@property (nonatomic) AWEIMTaskPlatformDetailCardDetailActivityContentView detailContentView;
@property (nonatomic) UIView separatorLineView;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)renderModel:context:;
- (void)setDetailContentView:;
- (id)detailContentView;
- (void)setFooterView:;
- (id)footerView;
- (id)headerView;
- (id)initWithStyle:reuseIdentifier:;
- (void).cxx_destruct;
- (void)setHeaderView:;
- (id)separatorLineView;
- (void)setSeparatorLineView:;
@end

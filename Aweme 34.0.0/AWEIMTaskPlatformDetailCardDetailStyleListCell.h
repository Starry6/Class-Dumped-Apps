@interface AWEIMTaskPlatformDetailCardDetailStyleListCell : UITableViewCell
@property (nonatomic) AWEIMTaskPlatformDetailCardDetailCellHeaderView headerView;
@property (nonatomic) AWEIMTaskPlatformDetailCardDetailCellFooterView footerView;
@property (nonatomic) AWEIMTaskPlatformDetailCardDetailListContentView detailContentView;
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

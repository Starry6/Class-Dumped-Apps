@interface IESLivePKMultiBrawlEntranceCell : UITableViewCell
@property (nonatomic) UIView<IESHYContainerProtocol> multiBrawlInfoView;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)multiBrawlInfoView;
- (void)setMultiBrawlInfoView:;
- (id)initWithStyle:reuseIdentifier:;
- (void)prepareForReuse;
- (void).cxx_destruct;
- (void)updateWithInfo:;
@end

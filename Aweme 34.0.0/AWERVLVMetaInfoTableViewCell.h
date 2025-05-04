@interface AWERVLVMetaInfoTableViewCell : UITableViewCell
@property (nonatomic) AWERVLVMetaInfoView metaInfoView;
- (id)metaInfoView;
- (void)setMetaInfoView:;
- (id)initWithStyle:reuseIdentifier:;
- (void).cxx_destruct;
- (void)setupUI;
- (void)updateWithModel:;
+ (double)height;
@end

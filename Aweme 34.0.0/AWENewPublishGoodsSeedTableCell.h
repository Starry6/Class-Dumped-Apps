@interface AWENewPublishGoodsSeedTableCell : AWENewPublishTableCell
@property (nonatomic) UILabel tagLabel;
@property (nonatomic) UIView seperatorLine;
@property (nonatomic) BOOL disable;
- (void)setDisable:;
- (BOOL)isDisable;
- (id)tagLabel;
- (void)setTagLabel:;
- (void)addSubviewsForContentView;
- (void)updateTagLabel:;
- (id)initWithStyle:reuseIdentifier:;
- (void).cxx_destruct;
- (id)seperatorLine;
- (void)setSeperatorLine:;
@end

@interface TLKContentsView : TLKStackView
@property (nonatomic) TLKLabel titleLabel;
@property (nonatomic) NSMutableArray detailsLabels;
- (id)init;
- (void)setTitleLabel:;
- (void).cxx_destruct;
- (id)titleLabel;
- (void)updateWithTitle:contents:;
- (id)detailsLabels;
- (void)setDetailsLabels:;
+ (id)detailsLabel;
@end

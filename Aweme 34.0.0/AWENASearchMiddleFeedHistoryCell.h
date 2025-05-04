@interface AWENASearchMiddleFeedHistoryCell : UICollectionViewCell
@property (nonatomic) UIImageView icon;
@property (nonatomic) UILabel content;
@property (nonatomic) UIButton deleteButton;
@property (nonatomic) UITapGestureRecognizer tapGesture;
@property (nonatomic) @? deleteBlock;
@property (nonatomic) @? tapBlock;
- (void)setTapBlock:;
- (id)tapBlock;
- (void)setDeleteBlock:;
- (void)p_buildViewHierarchy;
- (id)content;
- (void)setDeleteButton:;
- (id)icon;
- (id)initWithFrame:;
- (void)setContent:;
- (id)deleteButton;
- (void)setIcon:;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (id)tapGesture;
- (void)setTapGesture:;
- (void)deleteHistory;
- (void)tap;
- (id)deleteBlock;
@end

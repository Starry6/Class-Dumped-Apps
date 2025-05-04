@interface AWESearchSynthesisNovelCatalogCell : UITableViewCell
@property (nonatomic) Q chapterIndex;
@property (nonatomic) UILabel chapterTitleLabel;
@property (nonatomic) UIView lineView;
@property (nonatomic) UIButton rightTip;
- (void)setChapterIndex:;
- (id)chapterTitleLabel;
- (id)rightTip;
- (void)updateCellTipType:config:;
- (void)setChapterTitleLabel:;
- (void)setRightTip:;
- (void)updateWithNovelChapter:;
- (void)touchesCancelled:withEvent:;
- (id)initWithStyle:reuseIdentifier:;
- (void)touchesEnded:withEvent:;
- (void).cxx_destruct;
- (void)touchesBegan:withEvent:;
- (void)updateWithData:;
- (void)layoutSubviews;
- (id)lineView;
- (void)setLineView:;
- (unsigned long long)chapterIndex;
@end

@interface AWEIMOfficialContentFoldableTextView : UIView
@property (nonatomic) UILabel titleLabel;
@property (nonatomic) AWEOfficialContentLabel detailLabel;
@property (nonatomic) AWENoticeTextStructModel textModel;
@property (nonatomic) @? unFoldActionBlock;
- (id)textModel;
- (void)setTextModel:;
- (double)p_calculateYYlabelWidth;
- (id)unFoldActionBlock;
- (void)setUnFoldActionBlock:;
- (void)setModel:textModel:maxTitleWidth:isUnfold:;
- (id)init;
- (void)setTitleLabel:;
- (void).cxx_destruct;
- (id)titleLabel;
- (id)detailLabel;
- (void)setDetailLabel:;
@end

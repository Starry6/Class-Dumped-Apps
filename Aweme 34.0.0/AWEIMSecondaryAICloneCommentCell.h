@interface AWEIMSecondaryAICloneCommentCell : AWEIMSecondaryCommentCell
- (void)configWithModel:;
- (void)layoutSubviews;
- (void)setupUI;
+ (double)heightForModel:;
+ (id)identifier;
@end

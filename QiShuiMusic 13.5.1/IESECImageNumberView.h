@interface IESECImageNumberView : UIView
@property (nonatomic) UIImageView picImage;
@property (nonatomic) UILabel countLabel;
- (id)picImage;
- (void)setPicImage:;
- (void)updateWithCommentModel:;
- (id)initWithFrame:;
- (void).cxx_destruct;
- (void)setupUI;
- (void)updateWithCount:;
- (id)countLabel;
- (void)setCountLabel:;
@end

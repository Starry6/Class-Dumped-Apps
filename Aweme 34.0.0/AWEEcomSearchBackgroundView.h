@interface AWEEcomSearchBackgroundView : UIView
@property (nonatomic) AWESearchBackgroundModel backgroundModel;
@property (nonatomic) BOOL hasBackgroundContent;
@property (nonatomic) BOOL fillImageView;
- (void)setFillImageView:;
- (void)setBackgroundModel:;
- (BOOL)fillImageView;
- (id)initWithFrame:;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (BOOL)hasBackgroundContent;
- (void)updateWithModel:;
- (id)backgroundModel;
@end

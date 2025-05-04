@interface AWECaptionOptCollectionViewCell : UICollectionViewCell
@property (nonatomic) AWEStudioCaptionModel captionModel;
@property (nonatomic) UILabel captionLabel;
@property (nonatomic) BOOL textHighlighted;
@property (nonatomic) <AWECaptionOptCellDelegate> delegate;
- (id)captionModel;
- (void)setCaptionModel:;
- (void)configCellWithCaptionModel:;
- (void)configCaptionHighlight:;
- (BOOL)textHighlighted;
- (void)setTextHighlighted:;
- (void)updateCellHeight;
- (void)dealloc;
- (id)delegate;
- (id)initWithFrame:;
- (void).cxx_destruct;
- (void)setDelegate:;
- (void)setupUI;
- (id)captionLabel;
- (void)setCaptionLabel:;
+ (id)captionCalculateLabel;
+ (id)dynamicCellSizeWithCaptionModel:;
+ (id)identifier;
@end

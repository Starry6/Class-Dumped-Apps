@interface AWEIMSelectableStatusView : UIView
@property (nonatomic) Q status;
@property (nonatomic) q number;
@property (nonatomic) UIImageView unselectImageView;
@property (nonatomic) UILabel numberLabel;
@property (nonatomic) UIImageView selectImageView;
@property (nonatomic) UIImage selectImage;
@property (nonatomic) {CGSize=dd} primarySize;
- (id)selectImageView;
- (void)setPrimarySize:;
- (void)setSelectImage:;
- (id)initWithFrame:withUnselectImage:withSelectImage:;
- (id)primarySize;
- (id)selectImage;
- (void)setSelect:number:animated:;
- (void)setSelectImageView:;
- (void)setUnselectImageView:;
- (id)unselectImageView;
- (void)setStatus:;
- (long long)number;
- (void)setNumber:;
- (void).cxx_destruct;
- (unsigned long long)status;
- (id)numberLabel;
- (void)setNumberLabel:;
@end

@interface AWEIMSelectableStatusView : UIView
@property (nonatomic) Q status;
@property (nonatomic) q number;
@property (nonatomic) UIImageView unselectImageView;
@property (nonatomic) UILabel numberLabel;
@property (nonatomic) UIImageView selectImageView;
@property (nonatomic) UIImage selectImage;
@property (nonatomic) {CGSize=dd} primarySize;
@property (nonatomic) BOOL newStyle;
- (void)setSelectImageView:;
- (id)selectImageView;
- (id)selectImage;
- (BOOL)newStyle;
- (void)setNewStyle:;
- (void)setSelectImage:;
- (void)setSelect:number:animated:;
- (id)initWithFrame:withUnselectImage:withSelectImage:;
- (id)unselectImageView;
- (id)primarySize;
- (void)setUnselectImageView:;
- (void)setPrimarySize:;
- (void)setStatus:;
- (long long)number;
- (void).cxx_destruct;
- (unsigned long long)status;
- (void)setNumber:;
- (void)setNumberLabel:;
- (id)numberLabel;
@end

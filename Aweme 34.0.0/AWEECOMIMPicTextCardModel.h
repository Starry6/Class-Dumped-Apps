@interface AWEECOMIMPicTextCardModel : AWEECOMIMBaseCardModel
@property (nonatomic) AWEECOMIMTextComponentModel textModel;
@property (nonatomic) AWEECOMIMImageItemModel imageItemModel;
@property (nonatomic) {CGSize=dd} textContentSize;
@property (nonatomic) {CGSize=dd} imageContentSize;
- (id)imageItemModel;
- (void)setImageItemModel:;
- (id)textModel;
- (id)textContentSize;
- (void)setTextModel:;
- (void)updateModelWithData:encrypted:;
- (void)reBulildCellFullContentHeight;
- (id)_textContentSize;
- (void)setTextContentSize:;
- (id)_imageContentSize;
- (void)setImageContentSize:;
- (id)imageContentSize;
- (void).cxx_destruct;
+ (Class)cardViewClass;
+ (double)itemSpacePadding;
@end

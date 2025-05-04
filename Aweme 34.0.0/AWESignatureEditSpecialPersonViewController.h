@interface AWESignatureEditSpecialPersonViewController : UIViewController
@property (nonatomic) NSArray labelDataSourceArray;
@property (nonatomic) double startX;
@property (nonatomic) double startY;
- (void)configSpecialPersonViewWith:btnClickBlock:;
- (double)labelViewHeight;
- (void)setStartY:;
- (id)createButtonWithLabelName:;
- (void)addLabelButtonToView:;
- (id)labelDataSourceArray;
- (void)setLabelDataSourceArray:;
- (void).cxx_destruct;
- (void)setStartX:;
- (double)startX;
- (double)startY;
@end

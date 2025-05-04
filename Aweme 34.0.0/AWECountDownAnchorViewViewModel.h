@interface AWECountDownAnchorViewViewModel : NSObject
@property (nonatomic) Q stage;
@property (nonatomic) NSString currentText;
@property (nonatomic) UIFont titleFont;
@property (nonatomic) UIColor titleColor;
@property (nonatomic) {UIEdgeInsets=dddd} titleEdgeInset;
@property (nonatomic) NSString backGroundImgURL;
@property (nonatomic) NSString finishImageURL;
- (void)dealloc;
- (void)setBackGroundImgURL:;
- (id)titleEdgeInset;
- (id)backGroundImgURL;
- (void)setTitleEdgeInset:;
- (id)finishImageURL;
- (void)setFinishImageURL:;
- (id)titleColor;
- (void)setStage:;
- (void)setTitleColor:;
- (unsigned long long)stage;
- (void)setTitleFont:;
- (id)titleFont;
- (void).cxx_destruct;
- (void)setCurrentText:;
- (id)currentText;
@end

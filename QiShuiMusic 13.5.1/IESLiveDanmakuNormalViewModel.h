@interface IESLiveDanmakuNormalViewModel : NSObject
@property (nonatomic) NSAttributedString content;
@property (nonatomic) UIColor borderColor;
@property (nonatomic) BOOL showContentBorder;
@property (nonatomic) double cornerRadius;
@property (nonatomic) double height;
- (void)setShowContentBorder:;
- (BOOL)showContentBorder;
- (void)setBorderColor:;
- (id)content;
- (id)borderColor;
- (void)setContent:;
- (double)height;
- (void)setCornerRadius:;
- (void)setHeight:;
- (void).cxx_destruct;
- (double)cornerRadius;
@end

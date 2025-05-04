@interface AWERecWordLocalStatusModel : NSObject
@property (nonatomic) NSString titleLabelText;
@property (nonatomic) double okButtonAlpha;
@property (nonatomic) double cancelButtonAlpha;
@property (nonatomic) double satisfyButtonAlpha;
@property (nonatomic) double justSoSoButtonAlpha;
- (double)okButtonAlpha;
- (void)setOkButtonAlpha:;
- (double)cancelButtonAlpha;
- (void)setCancelButtonAlpha:;
- (double)satisfyButtonAlpha;
- (void)setSatisfyButtonAlpha:;
- (double)justSoSoButtonAlpha;
- (void)setJustSoSoButtonAlpha:;
- (void).cxx_destruct;
- (id)titleLabelText;
- (void)setTitleLabelText:;
@end

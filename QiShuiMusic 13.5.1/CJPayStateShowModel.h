@interface CJPayStateShowModel : NSObject
@property (nonatomic) NSString titleStr;
@property (nonatomic) NSMutableAttributedString titleAttributedStr;
@property (nonatomic) NSString iconName;
@property (nonatomic) double imgDurationTime;
@property (nonatomic) UIColor iconBackgroundColor;
- (double)imgDurationTime;
- (id)iconBackgroundColor;
- (void)setIconBackgroundColor:;
- (void)setImgDurationTime:;
- (void)setTitleAttributedStr:;
- (void)setTitleStr:;
- (id)titleAttributedStr;
- (id)titleStr;
- (id)iconName;
- (void).cxx_destruct;
- (void)setIconName:;
@end

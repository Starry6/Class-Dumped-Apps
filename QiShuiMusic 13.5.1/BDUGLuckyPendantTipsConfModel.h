@interface BDUGLuckyPendantTipsConfModel : BDUGLuckyJSONModel
@property (nonatomic) BOOL tipEnable;
@property (nonatomic) NSArray bgColor;
@property (nonatomic) double tipsDuration;
@property (nonatomic) NSString textColor;
@property (nonatomic) NSString content;
- (void)setTipEnable:;
- (void)setTipsDuration:;
- (BOOL)tipEnable;
- (double)tipsDuration;
- (id)content;
- (void)setContent:;
- (void)setTextColor:;
- (void).cxx_destruct;
- (id)textColor;
- (id)bgColor;
- (void)setBgColor:;
@end

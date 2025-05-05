@interface BDUGLuckyCounterPendantTipConfig : BDUGLuckyJSONModel
@property (nonatomic) BOOL tipEnable;
@property (nonatomic) NSArray bgColor;
@property (nonatomic) q tipDuration;
@property (nonatomic) NSString tipSize;
@property (nonatomic) NSString textColor;
@property (nonatomic) NSString content;
- (void)setTipDuration:;
- (id)tipSize;
- (void)setTipEnable:;
- (void)setTipSize:;
- (long long)tipDuration;
- (BOOL)tipEnable;
- (id)content;
- (void)setContent:;
- (void)setTextColor:;
- (void).cxx_destruct;
- (id)textColor;
- (id)bgColor;
- (void)setBgColor:;
@end

@interface AWELiveVSCustomTitleLable : UILabel
@property (nonatomic) UIColor customColor;
@property (nonatomic) BOOL needStroke;
- (void)changeLineSpace:;
- (void)setNeedStroke:;
- (BOOL)needStroke;
- (void)drawTextInRect:;
- (id)customColor;
- (void).cxx_destruct;
- (void)setCustomColor:;
@end

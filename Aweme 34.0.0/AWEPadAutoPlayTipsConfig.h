@interface AWEPadAutoPlayTipsConfig : NSObject
@property (nonatomic) q gapTime;
@property (nonatomic) q repeatCount;
@property (nonatomic) NSString tips;
- (long long)gapTime;
- (void)setGapTime:;
- (void)setRepeatCount:;
- (id)tips;
- (void).cxx_destruct;
- (void)setTips:;
- (long long)repeatCount;
+ (id)defaultCongfigFromSetting;
@end

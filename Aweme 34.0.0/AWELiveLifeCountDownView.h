@interface AWELiveLifeCountDownView : LynxUI
@property (nonatomic) q currentTime;
@property (nonatomic) q endTime;
@property (nonatomic) BOOL isFitFormatLength;
@property (nonatomic) NSTimer timer;
@property (nonatomic) UILabel label;
- (void)setIsFitFormatLength:;
- (BOOL)isFitFormatLength;
- (id)formatTime:time:isFitFormatLength:;
- (void)updateTime:requestReset:;
- (void)updateLabelUIStyle:requestReset:;
- (void)setLabel:;
- (void)setCurrentTime:;
- (void)setTimer:;
- (void)dealloc;
- (id)timer;
- (long long)endTime;
- (long long)currentTime;
- (void)setEndTime:;
- (id)label;
- (void).cxx_destruct;
- (id)createView;
+ (id)__lynx_prop_config__290;
+ (id)__lynx_prop_config__521;
@end

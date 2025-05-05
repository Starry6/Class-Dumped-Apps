@interface CSJRewardDrawConfig : NSObject
@property (nonatomic) Q max_draw_playtime;
@property (nonatomic) Q draw_rewarded_playtime;
@property (nonatomic) BOOL autoSlide;
@property (nonatomic) q showTimeType;
@property (nonatomic) q tipTime;
@property (nonatomic) q skip_btn_left_style;
@property (nonatomic) q skip_btn_right_style;
- (BOOL)autoSlide;
- (unsigned long long)draw_rewarded_playtime;
- (unsigned long long)max_draw_playtime;
- (void)setAutoSlide:;
- (void)setDraw_rewarded_playtime:;
- (void)setMax_draw_playtime:;
- (void)setShowTimeType:;
- (void)setSkip_btn_left_style:;
- (void)setSkip_btn_right_style:;
- (void)setTipTime:;
- (long long)showTimeType;
- (long long)skip_btn_left_style;
- (long long)skip_btn_right_style;
- (id)initWithDictionary:;
- (id)initWithCoder:;
- (void)encodeWithCoder:;
- (long long)tipTime;
@end

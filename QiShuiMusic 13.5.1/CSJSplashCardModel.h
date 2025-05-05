@interface CSJSplashCardModel : CSJBasicModel
@property (nonatomic) q splash_card_style_id;
@property (nonatomic) BOOL click_on_close;
@property (nonatomic) q card_stay_count_down;
@property (nonatomic) NSString card_top_text;
@property (nonatomic) NSString card_text;
@property (nonatomic) q card_click_area;
- (long long)card_click_area;
- (long long)card_stay_count_down;
- (id)card_text;
- (id)card_top_text;
- (BOOL)click_on_close;
- (void)setCard_click_area:;
- (void)setCard_stay_count_down:;
- (void)setCard_text:;
- (void)setCard_top_text:;
- (void)setClick_on_close:;
- (void)setSplash_card_style_id:;
- (long long)splash_card_style_id;
- (void).cxx_destruct;
@end

@interface AWEShowMonetizeMixRefresher : AWEShowMonetizeCommonRefresher
@property (nonatomic) AWEShowMonetizeContentRefresher contentRefresher;
- (void)refreshMonetizeContentWithInfo:;
- (id)contentRefresher;
- (void)setContentRefresher:;
- (id)init;
- (void).cxx_destruct;
@end

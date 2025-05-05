@interface MJRefreshAutoGifFooter : MJRefreshAutoStateFooter
@property (nonatomic) NSMutableDictionary stateImages;
@property (nonatomic) NSMutableDictionary stateDurations;
@property (nonatomic) UIImageView gifView;
- (void)setStateImages:;
- (id)gifView;
- (void)placeSubviews;
- (id)setImages:duration:forState:;
- (id)setImages:forState:;
- (void)setStateDurations:;
- (id)stateDurations;
- (id)stateImages;
- (void)setState:;
- (void)prepare;
- (void).cxx_destruct;
@end

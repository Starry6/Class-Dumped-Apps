@interface AWERecommendEntryControlView : UIControl
@property (nonatomic) @? clickBlock;
@property (nonatomic) @? preFetchBlock;
@property (nonatomic) BOOL allowClick;
@property (nonatomic) BOOL isNotFirstEnter;
- (void)setClickBlock:;
- (id)clickBlock;
- (void)handleClick;
- (BOOL)allowClick;
- (void)setAllowClick:;
- (BOOL)isNotFirstEnter;
- (void)setIsNotFirstEnter:;
- (id)preFetchBlock;
- (void)setPreFetchBlock:;
- (id)init;
- (BOOL)pointInside:withEvent:;
- (void).cxx_destruct;
@end

@interface IESECSliceXShopRecommendScrollView : IESECSliceXScrollElementView
@property (nonatomic) BOOL firstScrollToEnd;
@property (nonatomic) BOOL allowScrollToShop;
@property (nonatomic) BOOL hasTrackScroll;
@property (nonatomic) IESECSliceXAction scrollToShopAction;
@property (nonatomic) NSDictionary slideParams;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)setSlideParams:;
- (BOOL)allowScrollToShop;
- (BOOL)firstScrollToEnd;
- (BOOL)hasTrackScroll;
- (void)scrollToEnd;
- (id)scrollToShopAction;
- (void)setAllowScrollToShop:;
- (void)setFirstScrollToEnd:;
- (void)setHasTrackScroll:;
- (void)setScrollToShopAction:;
- (id)slideParams;
- (void)trackSlide;
- (BOOL)updateWithSliceXElement:error:;
- (void)scrollViewDidEndDecelerating:;
- (void)scrollViewDidScroll:;
- (id)initWithContext:;
- (void).cxx_destruct;
@end

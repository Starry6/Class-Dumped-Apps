@interface CSJDynamicCarouselView : CSJDynamicAbstractView
@property (nonatomic) NSArray carouselSubviews;
@property (nonatomic) NSArray positionsArray;
@property (nonatomic) BUTimer timer;
- (void)applySubviewsToCarouselSubviews;
- (id)carouselSubviews;
- (id)initWithGlobalModel:layoutDictionary:parentView:error:;
- (id)positionsArray;
- (void)setCarouselSubviews:;
- (void)setPositionsArray:;
- (void)timerEvent;
- (void)updateSubviewsPosition;
- (void)dealloc;
- (void)setTimer:;
- (void)startAnimation;
- (void).cxx_destruct;
- (id)timer;
- (void)render;
@end

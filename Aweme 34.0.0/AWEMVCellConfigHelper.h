@interface AWEMVCellConfigHelper : NSObject
@property (nonatomic) AWEMVCardResourceCache cardResourceCache;
@property (nonatomic) NSString referString;
@property (nonatomic) AWEDCFeedPageContext context;
- (id)referString;
- (void)setReferString:;
- (long long)padHorizontalBreakPoint;
- (double)ratioWithLiveModel:;
- (id)cardResourceCache;
- (id)padConfig;
- (double)imageRatioWithModel:;
- (id)initWithReferString:context:;
- (id)getCoverImageURLWithModel:imageURLSource:;
- (void)configImageElementResourceViewWithConfig:awemeModel:position:;
- (void)configImageElementReuseResourceViewWithConfig:position:awemeModel:pageContext:;
- (void)configGradientMaskForImageViewWithMaskConfig:uiConfig:awemeModel:containerView:;
- (id)getCoverImageCacheKeyWithModel:;
- (void)setCardResourceCache:;
- (void)setContext:;
- (void).cxx_destruct;
- (id)context;
@end

@interface IESECGoodsDetailAccessibleManager : NSObject
@property (nonatomic) NSCache accessibleLabelCache;
- (id)getAccessibleLabelFromImageURL:;
- (id)accessibleLabelCache;
- (void)cacheAccessbleLabel:key:;
- (id)cachedAccessbleLabelForKey:;
- (id)getAccessibleLabelFromImage:;
- (void)prefetchAccessibleLabelFromImageURL:defaultLabelL:completion:;
- (void)setAccessibleLabelCache:;
- (void).cxx_destruct;
+ (id)shared;
@end

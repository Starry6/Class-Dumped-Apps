@interface IESECSliceXExposureElementViewStorage : NSObject
@property (nonatomic) NSMutableDictionary exposureMap;
- (void)setExposureMap:;
- (void)exposureElementViewWithUniqueID:elementID:threshold:;
- (id)exposureMap;
- (BOOL)isElementViewHasExposuredWithUniqueID:elementID:threshold:;
- (void).cxx_destruct;
@end

@interface CSJAdBannerSlot : NSObject
@property (nonatomic) q isRotateBanner;
@property (nonatomic) q rotateTime;
@property (nonatomic) q rotateOrder;
- (void)setRotateOrder:;
- (id)csj_dictionaryValue;
- (long long)isRotateBanner;
- (long long)rotateOrder;
- (long long)rotateTime;
- (void)setIsRotateBanner:;
- (void)setRotateTime:;
@end

@interface AWEPOIDouDiscountPOICardConf : MTLModel
@property (nonatomic) BOOL canClose;
@property (nonatomic) q openTimeMS;
@property (nonatomic) q days;
@property (nonatomic) q threshold;
@property (nonatomic) q banDays;
@property (nonatomic) NSString poiCardSchema;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (long long)openTimeMS;
- (void)setOpenTimeMS:;
- (long long)banDays;
- (void)setBanDays:;
- (id)poiCardSchema;
- (void)setPoiCardSchema:;
- (long long)threshold;
- (void)setThreshold:;
- (void).cxx_destruct;
- (long long)days;
- (void)setDays:;
- (BOOL)canClose;
- (void)setCanClose:;
+ (id)JSONKeyPathsByPropertyKey;
@end

@interface AMapNearbySearchResponse : AMapSearchObject
@property (nonatomic) q count;
@property (nonatomic) NSArray infos;
- (id)infos;
- (void)setCount:;
- (void).cxx_destruct;
- (long long)count;
- (void)setInfos:;
+ (id)ajo_arrayClassMapping;
+ (id)ajo_mapping;
@end

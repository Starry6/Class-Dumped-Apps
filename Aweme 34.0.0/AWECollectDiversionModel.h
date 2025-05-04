@interface AWECollectDiversionModel : AWEBaseDataModel
@property (nonatomic) NSArray musicDiversionListModelArray;
@property (nonatomic) NSInteger diversionCount;
- (void)setMusicDiversionListModelArray:;
- (void)setDiversionCount:;
- (int)diversionCount;
- (id)musicDiversionListModelArray;
- (void).cxx_destruct;
+ (id)propertyToModelClassInArrayMap;
+ (id)JSONKeyPathsByPropertyKey;
@end

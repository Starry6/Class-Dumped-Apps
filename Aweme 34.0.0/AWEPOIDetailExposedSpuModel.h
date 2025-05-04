@interface AWEPOIDetailExposedSpuModel : MTLModel
@property (nonatomic) AWEPOIServiceSpuEntryModel spuListEntry;
@property (nonatomic) AWEPOISpuModel poiDetailSpu;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)spuListEntry;
- (void)setSpuListEntry:;
- (id)poiDetailSpu;
- (void)setPoiDetailSpu:;
- (void).cxx_destruct;
+ (id)JSONKeyPathsByPropertyKey;
@end

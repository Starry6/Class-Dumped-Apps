@interface AWEPOISpuListModuleModel : MTLModel
@property (nonatomic) NSString title;
@property (nonatomic) NSString desc;
@property (nonatomic) NSArray spuList;
@property (nonatomic) AWEPOIServiceSpuEntryModel spuEntry;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)spuEntry;
- (void)setSpuEntry:;
- (id)spuList;
- (void)setSpuList:;
- (void)setDesc:;
- (id)desc;
- (void).cxx_destruct;
- (id)title;
- (void)setTitle:;
+ (id)spuListJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
@end

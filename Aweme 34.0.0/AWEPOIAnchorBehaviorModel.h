@interface AWEPOIAnchorBehaviorModel : MTLModel
@property (nonatomic) Q type;
@property (nonatomic) NSString spuID;
@property (nonatomic) Q spuType;
@property (nonatomic) Q spuPlatformSource;
@property (nonatomic) AWEPOIServiceSpuEntryModel spuEntry;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)spuID;
- (void)setSpuID:;
- (id)spuEntry;
- (void)setSpuEntry:;
- (unsigned long long)spuType;
- (void)setSpuType:;
- (unsigned long long)spuPlatformSource;
- (void)setSpuPlatformSource:;
- (unsigned long long)type;
- (void)setType:;
- (void).cxx_destruct;
+ (id)JSONKeyPathsByPropertyKey;
@end

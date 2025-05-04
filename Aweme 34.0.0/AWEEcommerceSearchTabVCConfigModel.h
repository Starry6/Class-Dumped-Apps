@interface AWEEcommerceSearchTabVCConfigModel : MTLModel
@property (nonatomic) NSString enterFromSource;
@property (nonatomic) NSString searchChannel;
@property (nonatomic) AWESearchTabConfig tabConfig;
@property (nonatomic) NSString ecommerceSubtabName;
@property (nonatomic) NSString searchType;
@property (nonatomic) NSString btmPageIdentifier;
@property (nonatomic) double collectionViewOffset;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)tabConfig;
- (void)setTabConfig:;
- (id)enterFromSource;
- (void)setEnterFromSource:;
- (id)searchChannel;
- (void)setSearchChannel:;
- (id)ecommerceSubtabName;
- (void)setEcommerceSubtabName:;
- (id)btmPageIdentifier;
- (void)setBtmPageIdentifier:;
- (double)collectionViewOffset;
- (void)setCollectionViewOffset:;
- (id)searchType;
- (void)setSearchType:;
- (void).cxx_destruct;
+ (id)JSONKeyPathsByPropertyKey;
@end

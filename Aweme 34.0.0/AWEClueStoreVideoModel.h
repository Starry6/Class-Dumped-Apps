@interface AWEClueStoreVideoModel : MTLModel
@property (nonatomic) NSString vid;
@property (nonatomic) q itemID;
@property (nonatomic) NSArray coverURLs;
@property (nonatomic) NSArray playAddressURLs;
@property (nonatomic) double width;
@property (nonatomic) double height;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)coverURLs;
- (void)setCoverURLs:;
- (id)playAddressURLs;
- (void)setPlayAddressURLs:;
- (long long)itemID;
- (void)setItemID:;
- (void)setHeight:;
- (void)setWidth:;
- (double)width;
- (void).cxx_destruct;
- (double)height;
- (void)setVid:;
- (id)vid;
+ (BOOL)automaticallyDefaultMapping;
+ (id)JSONKeyPathsByPropertyKey;
@end

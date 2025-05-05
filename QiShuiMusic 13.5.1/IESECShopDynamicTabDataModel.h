@interface IESECShopDynamicTabDataModel : MTLModel
@property (nonatomic) NSArray moduleWrapperList;
@property (nonatomic) NSString raw;
@property (nonatomic) NSArray components;
@property (nonatomic) NSDictionary block;
@property (nonatomic) IESECListKitListModel hybridList;
@property (nonatomic) BOOL hasMore;
@property (nonatomic) Q cursor;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)hybridList;
- (id)moduleWrapperList;
- (void)setHybridList:;
- (void)setModuleWrapperList:;
- (id)block;
- (unsigned long long)cursor;
- (id)components;
- (void)setComponents:;
- (void)setHasMore:;
- (void)setCursor:;
- (void).cxx_destruct;
- (BOOL)hasMore;
- (void)setBlock:;
- (void)setRaw:;
- (id)raw;
+ (id)JSONKeyPathsByPropertyKey;
@end

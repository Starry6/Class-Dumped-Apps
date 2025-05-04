@interface AWELeftSideBarDynamicDataAppModel : MTLModel
@property (nonatomic) BOOL isCacheData;
@property (nonatomic) NSArray data;
@property (nonatomic) NSArray highValueList;
@property (nonatomic) AWELeftSideBarDynamicItemLinkTitleAppModel linkTitle;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)highValueList;
- (void)setHighValueList:;
- (void)setData:;
- (void).cxx_destruct;
- (id)data;
- (id)linkTitle;
- (void)setIsCacheData:;
- (BOOL)isCacheData;
- (void)setLinkTitle:;
+ (id)highValueListJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
+ (id)dataJSONTransformer;
+ (id)linkTitleJSONTransformer;
@end

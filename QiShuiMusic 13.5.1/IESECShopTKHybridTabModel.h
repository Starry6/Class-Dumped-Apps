@interface IESECShopTKHybridTabModel : MTLModel
@property (nonatomic) NSString tmpId;
@property (nonatomic) NSString passThroughFE;
@property (nonatomic) NSString tabEventName;
@property (nonatomic) NSString tabEventExtraParams;
@property (nonatomic) NSArray tabScrollViewIds;
@property (nonatomic) IESECShopDynamicTabDataModel tabData;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)tabData;
- (id)passThroughFE;
- (void)setPassThroughFE:;
- (void)setTabData:;
- (void)setTabEventExtraParams:;
- (void)setTabEventName:;
- (void)setTabScrollViewIds:;
- (void)setTmpId:;
- (id)tabEventExtraParams;
- (id)tabEventName;
- (id)tabScrollViewIds;
- (id)tmpId;
- (void).cxx_destruct;
+ (id)JSONKeyPathsByPropertyKey;
@end

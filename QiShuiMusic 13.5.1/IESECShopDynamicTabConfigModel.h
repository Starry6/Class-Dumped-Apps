@interface IESECShopDynamicTabConfigModel : MTLModel
@property (nonatomic) NSString tabEventName;
@property (nonatomic) NSString tabEventExtraParams;
@property (nonatomic) BOOL needDynamicData;
@property (nonatomic) NSString tabApiPath;
@property (nonatomic) NSString tabApiExtraParams;
@property (nonatomic) NSArray tabScrollViewIds;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (BOOL)needDynamicData;
- (void)setNeedDynamicData:;
- (void)setTabApiExtraParams:;
- (void)setTabApiPath:;
- (void)setTabEventExtraParams:;
- (void)setTabEventName:;
- (void)setTabScrollViewIds:;
- (id)tabApiExtraParams;
- (id)tabApiPath;
- (id)tabEventExtraParams;
- (id)tabEventName;
- (id)tabScrollViewIds;
- (id)init;
- (void).cxx_destruct;
+ (id)JSONKeyPathsByPropertyKey;
@end

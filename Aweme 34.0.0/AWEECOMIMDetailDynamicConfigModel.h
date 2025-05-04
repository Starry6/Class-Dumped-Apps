@interface AWEECOMIMDetailDynamicConfigModel : MTLModel
@property (nonatomic) NSDictionary cardMap;
@property (nonatomic) NSArray sliceTemplatePreloadList;
@property (nonatomic) NSArray lynxTemplatePreloadList;
@property (nonatomic) AWEECOMIMDetailPlatformDynamicCardTestConfig test;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)sliceTemplatePreloadList;
- (id)cardMap;
- (void)setCardMap:;
- (void)setSliceTemplatePreloadList:;
- (id)lynxTemplatePreloadList;
- (void)setLynxTemplatePreloadList:;
- (id)test;
- (void).cxx_destruct;
- (void)setTest:;
+ (id)cardMapJSONTransformer;
+ (id)sliceTemplatePreloadListJSONTransformer;
+ (id)testJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
@end

@interface AWEGrouponLifeInsertForwardCardData : MTLModel
@property (nonatomic) BOOL enableGrouponGuideCards;
@property (nonatomic) NSArray exposeCardConf;
@property (nonatomic) NSString rawDataJson;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)exposeCardConf;
- (id)rawDataJson;
- (BOOL)enableGrouponGuideCards;
- (void)setEnableGrouponGuideCards:;
- (void)setExposeCardConf:;
- (void)setRawDataJson:;
- (void).cxx_destruct;
- (id)rawData;
+ (BOOL)automaticallyDefaultMapping;
+ (id)exposeCardConfJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
@end

@interface AWEPOIUploadCreationVideoExtractConfig : MTLModel
@property (nonatomic) double width;
@property (nonatomic) double height;
@property (nonatomic) NSArray configList;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)configList;
- (void)setConfigList:;
- (void)setHeight:;
- (void)setWidth:;
- (double)width;
- (void).cxx_destruct;
- (double)height;
+ (id)configListJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
@end

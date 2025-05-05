@interface IESECDCPageLynxLiteModel : MTLModel
@property (nonatomic) NSString schema;
@property (nonatomic) NSDictionary metaData;
@property (nonatomic) NSDictionary epSKUInfo;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)epSKUInfo;
- (id)initWithLyxElement:;
- (void)setEpSKUInfo:;
- (id)schema;
- (void)setMetaData:;
- (void)setSchema:;
- (id)metaData;
- (void).cxx_destruct;
+ (id)JSONKeyPathsByPropertyKey;
@end

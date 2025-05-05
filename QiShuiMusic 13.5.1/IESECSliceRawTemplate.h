@interface IESECSliceRawTemplate : MTLModel
@property (nonatomic) NSString typeStr;
@property (nonatomic) NSArray elementItemArray;
@property (nonatomic) IESECSliceStyle style;
@property (nonatomic) NSDictionary meta;
@property (nonatomic) Q type;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)elementItemArray;
- (void)setElementItemArray:;
- (void)setTypeStr:;
- (id)meta;
- (void)setType:;
- (void)setStyle:;
- (void)setMeta:;
- (id)typeStr;
- (unsigned long long)type;
- (void).cxx_destruct;
- (id)style;
+ (id)JSONKeyPathsByPropertyKey;
@end

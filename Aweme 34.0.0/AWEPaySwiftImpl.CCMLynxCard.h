@interface AWEPaySwiftImpl.CCMLynxCard : MTLModel
@property (nonatomic) NSString schema;
@property (nonatomic) NSDictionary data;
- (id)schema;
- (id)initWithDictionary:error:;
- (id)init;
- (void)setSchema:;
- (void)setData:;
- (void).cxx_destruct;
- (id)data;
- (id)initWithCoder:;
+ (id)JSONKeyPathsByPropertyKey;
@end

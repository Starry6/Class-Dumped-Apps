@interface AWEHPHambMessageModel : MTLModel
@property (nonatomic) NSDictionary rawData;
@property (nonatomic) q version;
@property (nonatomic) NSArray items;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (BOOL)isValidWithError:;
- (id)items;
- (void)setItems:;
- (long long)version;
- (void)setRawData:;
- (void)setVersion:;
- (void).cxx_destruct;
- (id)rawData;
+ (id)itemsJSONTransformer;
+ (id)modelWithRawData:error:;
+ (id)JSONKeyPathsByPropertyKey;
@end

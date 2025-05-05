@interface IESECLiveToggleModel : MTLModel
@property (nonatomic) Q type;
@property (nonatomic) NSArray elements;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)elements;
- (void)setElements:;
- (void)setType:;
- (unsigned long long)type;
- (void).cxx_destruct;
+ (id)elementsJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
@end

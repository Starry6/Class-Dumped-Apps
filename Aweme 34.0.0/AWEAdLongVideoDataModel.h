@interface AWEAdLongVideoDataModel : MTLModel
@property (nonatomic) NSArray adItems;
@property (nonatomic) NSNumber skipAdSeconds;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)skipAdSeconds;
- (void)setSkipAdSeconds:;
- (id)adItems;
- (void)setAdItems:;
- (void).cxx_destruct;
+ (id)adItemsJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
@end

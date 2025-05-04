@interface AWEHomePageRemoteGuideTipsModel : MTLModel
@property (nonatomic) NSString componentID;
@property (nonatomic) NSString guideBubbleID;
@property (nonatomic) NSArray items;
@property (nonatomic) NSDictionary guideTipsConfig;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)guideBubbleID;
- (void)setGuideBubbleID:;
- (id)guideTipsConfig;
- (void)setGuideTipsConfig:;
- (id)items;
- (void)setItems:;
- (id)description;
- (void).cxx_destruct;
- (void)setComponentID:;
- (id)componentID;
- (BOOL)isModelValid;
+ (id)itemsJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
@end

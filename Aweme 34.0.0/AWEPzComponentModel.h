@interface AWEPzComponentModel : MTLModel
@property (nonatomic) NSString componentID;
@property (nonatomic) NSString type;
@property (nonatomic) NSSet cTags;
@property (nonatomic) NSSet sTags;
@property (nonatomic) NSArray strategies;
@property (nonatomic) NSDictionary data;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)cTags;
- (id)sTags;
- (void)setSTags:;
- (void)setCTags:;
- (void)setStrategies:;
- (id)type;
- (id)description;
- (void)setType:;
- (void)setData:;
- (void).cxx_destruct;
- (id)data;
- (void)setComponentID:;
- (id)componentID;
- (id)strategies;
+ (id)cTagsJSONTransformer;
+ (id)sTagsJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
@end

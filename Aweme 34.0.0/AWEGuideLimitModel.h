@interface AWEGuideLimitModel : MTLModel
@property (nonatomic) q id;
@property (nonatomic) q position;
@property (nonatomic) NSArray relyIDs;
@property (nonatomic) NSArray limitActions;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)relyIDs;
- (void)setRelyIDs:;
- (id)limitActions;
- (void)setLimitActions:;
- (long long)position;
- (long long)id;
- (void).cxx_destruct;
- (void)setPosition:;
- (void)setId:;
+ (id)limitActionsJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
@end

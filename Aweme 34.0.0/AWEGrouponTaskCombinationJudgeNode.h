@interface AWEGrouponTaskCombinationJudgeNode : MTLModel
@property (nonatomic) NSString type;
@property (nonatomic) NSArray childNodes;
@property (nonatomic) NSDictionary data;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)type;
- (void)setType:;
- (void)setData:;
- (void).cxx_destruct;
- (id)data;
- (id)childNodes;
- (void)setChildNodes:;
+ (BOOL)automaticallyDefaultMapping;
+ (id)childNodesJSONTransformer;
@end

@interface AWEGeneralSearchReorderStructModel : MTLModel
@property (nonatomic) NSString fp;
@property (nonatomic) NSString nodeId;
@property (nonatomic) NSArray children;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)children;
- (void).cxx_destruct;
- (void)setChildren:;
- (id)nodeId;
- (id)fp;
- (void)setFp:;
- (void)setNodeId:;
+ (id)JSONKeyPathsByPropertyKey;
+ (id)childrenJSONTransformer;
@end

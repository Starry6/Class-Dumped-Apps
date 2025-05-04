@interface AWEClueStoreBackgroundModel : MTLModel
@property (nonatomic) q backgroundType;
@property (nonatomic) NSArray backgroundList;
@property (nonatomic) NSString clueLogExtra;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)backgroundList;
- (void)setBackgroundList:;
- (id)clueLogExtra;
- (void)setClueLogExtra:;
- (void)setBackgroundType:;
- (void).cxx_destruct;
- (long long)backgroundType;
+ (BOOL)automaticallyDefaultMapping;
+ (id)backgroundListJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
@end

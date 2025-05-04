@interface AWEVideoDiaryModel : MTLModel
@property (nonatomic) NSNumber ID;
@property (nonatomic) AWEURLModel icon;
@property (nonatomic) NSString name;
@property (nonatomic) NSString desc;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)setID:;
- (id)ID;
- (id)icon;
- (void)setDesc:;
- (id)desc;
- (void)setIcon:;
- (void).cxx_destruct;
- (void)setName:;
- (id)name;
+ (id)metaJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
@end

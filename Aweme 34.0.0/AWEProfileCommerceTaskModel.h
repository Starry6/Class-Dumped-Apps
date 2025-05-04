@interface AWEProfileCommerceTaskModel : MTLModel
@property (nonatomic) NSNumber taskID;
@property (nonatomic) NSString name;
@property (nonatomic) NSString desc;
@property (nonatomic) AWEURLModel headImageUrl;
@property (nonatomic) NSString openUrl;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)openUrl;
- (void)setOpenUrl:;
- (id)headImageUrl;
- (void)setHeadImageUrl:;
- (void)setDesc:;
- (id)desc;
- (void).cxx_destruct;
- (void)setTaskID:;
- (void)setName:;
- (id)name;
- (id)taskID;
+ (id)headImageUrlJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
@end

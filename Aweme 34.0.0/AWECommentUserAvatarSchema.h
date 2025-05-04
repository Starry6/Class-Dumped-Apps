@interface AWECommentUserAvatarSchema : MTLModel
@property (nonatomic) NSArray avatarSchemaArray;
@property (nonatomic) NSDictionary urlCommonData;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)avatarSchemaArray;
- (id)urlCommonData;
- (void)setAvatarSchemaArray:;
- (void)setUrlCommonData:;
- (void).cxx_destruct;
+ (id)urlCommonDataJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
@end

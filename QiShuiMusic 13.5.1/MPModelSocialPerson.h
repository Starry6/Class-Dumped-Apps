@interface MPModelSocialPerson : MPModelPerson
@property (nonatomic) NSString uncensoredName;
@property (nonatomic) NSString handle;
@property (nonatomic) NSString biography;
@property (nonatomic) BOOL privatePerson;
@property (nonatomic) BOOL verified;
@property (nonatomic) q pendingRequestsCount;
@property (nonatomic) @? artworkCatalogBlock;
- (id)artworkCatalog;
+ (id)__verified_KEY;
+ (id)kind;
+ (id)__privatePerson_KEY;
+ (id)__artworkCatalogBlock_KEY;
+ (long long)genericObjectType;
+ (id)__pendingRequestsCount_KEY;
+ (id)__uncensoredName_KEY;
+ (id)__handle_KEY;
+ (id)__biography_KEY;
@end

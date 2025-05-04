@interface AWETemplateAuthorModel : MTLModel
@property (nonatomic) NSString cUid;
@property (nonatomic) NSString cUserName;
@property (nonatomic) NSString dUid;
@property (nonatomic) NSString dUserName;
@property (nonatomic) BOOL isInternalUser;
@property (nonatomic) AWEUserModel userModel;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (BOOL)isInternalUser;
- (id)dUid;
- (id)dUserName;
- (id)cUid;
- (void)setCUid:;
- (id)cUserName;
- (void)setCUserName:;
- (void)setDUid:;
- (void)setDUserName:;
- (void)setIsInternalUser:;
- (void)setUserModel:;
- (void).cxx_destruct;
- (id)userModel;
+ (id)authorJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
@end

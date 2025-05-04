@interface AWECoCreatorSerachUserModel : AWEUserModel
@property (nonatomic) BOOL banBeCoCreator;
@property (nonatomic) BOOL canBeCoCreator;
@property (nonatomic) NSString banReason;
@property (nonatomic) Q verifyType;
@property (nonatomic) NSString verifyReason;
@property (nonatomic) AWECoCreatorRoleInfoModel roleInfo;
- (BOOL)banBeCoCreator;
- (BOOL)canBeCoCreator;
- (void)setCanBeCoCreator:;
- (id)banReason;
- (void)setBanReason:;
- (id)verifyReason;
- (void)setVerifyReason:;
- (id)roleInfo;
- (void)setRoleInfo:;
- (void)setBanBeCoCreator:;
- (void).cxx_destruct;
- (void)setVerifyType:;
- (unsigned long long)verifyType;
+ (id)avatarJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
@end

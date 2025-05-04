@interface AWEIMInvalidMemberModel : MTLModel
@property (nonatomic) NSString displayName;
@property (nonatomic) NSString nickname;
@property (nonatomic) NSString secUserID;
@property (nonatomic) NSNumber userID;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)secUserID;
- (void)setSecUserID:;
- (id)nickname;
- (id)userID;
- (id)displayName;
- (void)setDisplayName:;
- (void).cxx_destruct;
- (void)setNickname:;
- (void)setUserID:;
+ (id)JSONKeyPathsByPropertyKey;
@end

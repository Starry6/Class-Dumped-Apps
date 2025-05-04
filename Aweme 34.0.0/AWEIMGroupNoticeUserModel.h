@interface AWEIMGroupNoticeUserModel : MTLModel
@property (nonatomic) NSNumber userID;
@property (nonatomic) NSString userSecID;
@property (nonatomic) NSString nickname;
@property (nonatomic) {_NSRange=QQ} range;
@property (nonatomic) NSString localName;
@property (nonatomic) NSArray roleIds;
@property (nonatomic) NSDictionary dictionaryValue;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)userSecID;
- (void)setUserSecID:;
- (void)setRoleIds:;
- (id)roleIds;
- (id)range;
- (void)setRange:;
- (id)nickname;
- (id)userID;
- (id)localName;
- (void).cxx_destruct;
- (id)initWithDictionary:;
- (void)setNickname:;
- (void)setUserID:;
- (void)setLocalName:;
+ (BOOL)p_enableFixRoleIdError;
+ (id)JSONKeyPathsByPropertyKey;
@end

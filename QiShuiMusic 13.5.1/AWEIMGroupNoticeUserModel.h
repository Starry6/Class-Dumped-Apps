@interface AWEIMGroupNoticeUserModel : MTLModel
@property (nonatomic) NSNumber userID;
@property (nonatomic) NSString userSecID;
@property (nonatomic) NSString nickname;
@property (nonatomic) {_NSRange=QQ} range;
@property (nonatomic) NSString localName;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)setUserSecID:;
- (id)userSecID;
- (id)userID;
- (id)localName;
- (void)setRange:;
- (id)initWithDictionary:;
- (id)nickname;
- (id)range;
- (void).cxx_destruct;
- (void)setNickname:;
- (void)setUserID:;
- (void)setLocalName:;
+ (id)JSONKeyPathsByPropertyKey;
@end

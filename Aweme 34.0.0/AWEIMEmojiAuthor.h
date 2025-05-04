@interface AWEIMEmojiAuthor : MTLModel
@property (nonatomic) NSString secUid;
@property (nonatomic) NSString name;
@property (nonatomic) NSString descrip;
@property (nonatomic) NSString avatarUrl;
@property (nonatomic) BOOL notFromAweme;
@property (nonatomic) NSDictionary dictionaryValue;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)secUid;
- (void)setAvatarUrl:;
- (id)avatarUrl;
- (void)setSecUid:;
- (id)descrip;
- (void)setDescrip:;
- (BOOL)notFromAweme;
- (void)setNotFromAweme:;
- (void).cxx_destruct;
- (void)setName:;
- (id)name;
+ (id)modelCustomPropertyMapper;
+ (id)JSONKeyPathsByPropertyKey;
@end

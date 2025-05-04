@interface AWEUserPlatformInfoModel : MTLModel
@property (nonatomic) BOOL hasUser;
@property (nonatomic) NSString platformAvatar;
@property (nonatomic) NSString platformUserName;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)setHasUser:;
- (id)platformAvatar;
- (void)setPlatformAvatar:;
- (id)platformUserName;
- (void)setPlatformUserName:;
- (void).cxx_destruct;
- (BOOL)hasUser;
+ (id)JSONKeyPathsByPropertyKey;
@end

@interface AWEIMBulletContainerClientDataAwemeInfo : MTLModel
@property (nonatomic) NSString authorNickname;
@property (nonatomic) NSString authorUID;
@property (nonatomic) NSString itemId;
@property (nonatomic) AWEURLModel coverURL;
@property (nonatomic) q shareWithTimestamp;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)setShareWithTimestamp:;
- (long long)shareWithTimestamp;
- (void)setAuthorUID:;
- (id)authorUID;
- (void)configDataWithMessage:;
- (void).cxx_destruct;
- (id)itemId;
- (id)authorNickname;
- (void)setAuthorNickname:;
- (id)coverURL;
- (void)setCoverURL:;
- (void)setItemId:;
+ (id)JSONKeyPathsByPropertyKey;
@end

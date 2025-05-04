@interface AWEMusicDiversionAuthorInfo : AWEBaseApiModel
@property (nonatomic) NSString authorName;
@property (nonatomic) NSString authorUid;
@property (nonatomic) NSString authorSecretID;
- (id)authorUid;
- (void)setAuthorUid:;
- (id)authorSecretID;
- (void)setAuthorSecretID:;
- (void).cxx_destruct;
- (id)authorName;
- (void)setAuthorName:;
+ (id)JSONKeyPathsByPropertyKey;
@end

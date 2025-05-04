@interface AWEIMBulletMessageVideoContent : NSObject
@property (nonatomic) NSString authorNickname;
@property (nonatomic) NSString authorUID;
@property (nonatomic) NSString itemId;
@property (nonatomic) AWEURLModel coverURL;
@property (nonatomic) NSDictionary rawDict;
@property (nonatomic) q shareWithTimestamp;
- (void)setRawDict:;
- (id)rawDict;
- (void)setShareWithTimestamp:;
- (long long)shareWithTimestamp;
- (void)setAuthorUID:;
- (id)authorUID;
- (void).cxx_destruct;
- (id)initWithDict:;
- (id)copyWithZone:;
- (id)itemId;
- (id)authorNickname;
- (void)setAuthorNickname:;
- (id)coverURL;
- (void)setCoverURL:;
- (void)setItemId:;
@end

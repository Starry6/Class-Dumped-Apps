@interface AWEIMVmojiResponseModel : NSObject
@property (nonatomic) Q status;
@property (nonatomic) NSString etag;
@property (nonatomic) AWEURLModel iconURLModel;
@property (nonatomic) q avatarVersion;
@property (nonatomic) NSArray stickers;
- (id)iconURLModel;
- (void)setIconURLModel:;
- (long long)avatarVersion;
- (void)setAvatarVersion:;
- (void)setEtag:;
- (void)setStatus:;
- (id)etag;
- (void).cxx_destruct;
- (unsigned long long)status;
- (id)initWithDictionary:;
- (id)stickers;
- (void)setStickers:;
@end

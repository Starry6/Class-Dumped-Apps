@interface AWELiveMatchResult : NSObject
@property (nonatomic) NSString nickname;
@property (nonatomic) Q userId;
@property (nonatomic) NSString secUid;
@property (nonatomic) NSString avatarUrl;
@property (nonatomic) NSString account;
@property (nonatomic) {_NSRange=QQ} highlightRange;
@property (nonatomic) Q hitType;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)secUid;
- (void)setAvatarUrl:;
- (id)avatarUrl;
- (void)setSecUid:;
- (void)setHighlightRange:;
- (unsigned long long)hitType;
- (void)setHitType:;
- (id)nickname;
- (unsigned long long)userId;
- (void)setAccount:;
- (id)account;
- (void).cxx_destruct;
- (void)setUserId:;
- (void)setNickname:;
- (id)highlightRange;
@end

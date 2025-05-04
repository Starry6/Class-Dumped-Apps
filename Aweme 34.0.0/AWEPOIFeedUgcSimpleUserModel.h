@interface AWEPOIFeedUgcSimpleUserModel : MTLModel
@property (nonatomic) NSString uid;
@property (nonatomic) NSString nickName;
@property (nonatomic) AWEURLModel avatorThumb;
@property (nonatomic) AWEPOIFeedUgcAvatarFrameModel avatarFrame;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)avatorThumb;
- (void)setAvatorThumb:;
- (void)setUid:;
- (id)uid;
- (void)setNickName:;
- (void).cxx_destruct;
- (id)nickName;
- (void)setAvatarFrame:;
- (id)avatarFrame;
+ (id)JSONKeyPathsByPropertyKey;
@end

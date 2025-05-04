@interface AWEIMMixLoraUserCellViewModel : AWEIMMixLoraUserCellModel
@property (nonatomic) AWEIMMixedImageUserInfo info;
@property (nonatomic) AWEIMUser user;
@property (nonatomic) NSString cid;
- (void)setLoraImageURL:;
- (id)initWithUID:loraImageURL:cid:;
- (id)initWithUserID:cid:;
- (id)initWithMixUserInfo:cid:;
- (void)p_fetchUsersInfo:;
- (id)cid;
- (id)user;
- (void)setUser:;
- (void)setInfo:;
- (id)info;
- (void).cxx_destruct;
- (void)fetchImageWithURL:;
- (void)setCid:;
@end

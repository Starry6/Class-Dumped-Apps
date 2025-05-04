@interface AWEBDPSelfUserInfoModel : NSObject
@property (nonatomic) NSString openId;
@property (nonatomic) NSString secUid;
@property (nonatomic) NSString userImg;
@property (nonatomic) NSString nickName;
- (id)secUid;
- (void)setSecUid:;
- (id)openId;
- (void)setOpenId:;
- (id)userImg;
- (void)setUserImg:;
- (void)setNickName:;
- (void).cxx_destruct;
- (id)nickName;
+ (id)modelCustomPropertyMapper;
@end

@interface AWEBDPRankListItemModel : NSObject
@property (nonatomic) NSString value;
@property (nonatomic) NSString extra;
@property (nonatomic) NSString openId;
@property (nonatomic) NSString secUid;
@property (nonatomic) NSString userImg;
@property (nonatomic) NSString nickName;
@property (nonatomic) q priority;
@property (nonatomic) Q dataType;
- (void)setExtra:;
- (id)secUid;
- (void)setSecUid:;
- (id)openId;
- (void)setOpenId:;
- (id)userImg;
- (void)setUserImg:;
- (id)value;
- (void)setDataType:;
- (id)extra;
- (long long)priority;
- (void)setValue:;
- (void)setNickName:;
- (void)setPriority:;
- (void).cxx_destruct;
- (unsigned long long)dataType;
- (id)nickName;
+ (id)modelCustomPropertyMapper;
@end

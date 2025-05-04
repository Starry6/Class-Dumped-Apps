@interface AWEIMFGHFansGroupInfoModel : AWEBaseApiModel
@property (nonatomic) q groupID;
@property (nonatomic) NSString groupName;
@property (nonatomic) NSURL avatar;
- (void)setGroupID:;
- (void)setGroupName:;
- (long long)groupID;
- (id)groupName;
- (void).cxx_destruct;
- (id)params;
- (id)avatar;
- (void)setAvatar:;
+ (id)JSONKeyPathsByPropertyKey;
@end

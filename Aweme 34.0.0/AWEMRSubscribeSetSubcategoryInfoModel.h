@interface AWEMRSubscribeSetSubcategoryInfoModel : NSObject
@property (nonatomic) NSString subcategoryId;
@property (nonatomic) NSString subcategoryName;
@property (nonatomic) NSString channelId;
@property (nonatomic) q subscribeStatus;
@property (nonatomic) BOOL isSubscribed;
- (long long)subscribeStatus;
- (void)setSubscribeStatus:;
- (id)subcategoryId;
- (void)setSubcategoryId:;
- (void)setSubcategoryName:;
- (id)subcategoryName;
- (BOOL)isSubscribed;
- (id)description;
- (void).cxx_destruct;
- (id)copyWithZone:;
- (id)channelId;
- (void)setChannelId:;
@end

@interface AWEAdLynxCardGetFeedRoomInfoResultModel : BDXBridgeModel
@property (nonatomic) NSString title;
@property (nonatomic) NSNumber displayValue;
@property (nonatomic) NSString nickName;
@property (nonatomic) NSString avatarUrl;
- (void)setAvatarUrl:;
- (id)avatarUrl;
- (void)setNickName:;
- (void).cxx_destruct;
- (id)title;
- (id)nickName;
- (void)setTitle:;
- (id)displayValue;
- (void)setDisplayValue:;
+ (id)JSONKeyPathsByPropertyKey;
@end

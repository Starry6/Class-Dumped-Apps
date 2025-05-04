@interface AWEGameFeedSubscribePermissionViewBuilder : NSObject
@property (nonatomic) UIImage feedSubscribeImage;
@property (nonatomic) NSString feedSubscribeCoverUrl;
@property (nonatomic) NSString feedSubscribeInstruction;
@property (nonatomic) NSString permissionTips;
@property (nonatomic) NSString startType;
@property (nonatomic) q orientation;
- (id)startType;
- (void)setFeedSubscribeImage:;
- (void)setStartType:;
- (void)setPermissionTips:;
- (void)setFeedSubscribeInstruction:;
- (void)setFeedSubscribeCoverUrl:;
- (id)feedSubscribeImage;
- (id)feedSubscribeCoverUrl;
- (id)feedSubscribeInstruction;
- (id)permissionTips;
- (void)setOrientation:;
- (void).cxx_destruct;
- (long long)orientation;
@end

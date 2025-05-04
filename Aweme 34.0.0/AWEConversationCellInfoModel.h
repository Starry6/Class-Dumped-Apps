@interface AWEConversationCellInfoModel : AWEBaseApiModel
@property (nonatomic) q shareUserFollowStatus;
@property (nonatomic) BOOL canShowConversationBtn;
- (long long)shareUserFollowStatus;
- (void)setShareUserFollowStatus:;
- (BOOL)canShowConversationBtn;
- (void)setCanShowConversationBtn:;
+ (id)JSONKeyPathsByPropertyKey;
@end

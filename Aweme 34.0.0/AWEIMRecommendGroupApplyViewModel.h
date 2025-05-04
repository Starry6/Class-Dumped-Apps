@interface AWEIMRecommendGroupApplyViewModel : NSObject
@property (nonatomic) AWEIMRecommendGroupApplyResponseModel model;
@property (nonatomic) AWEIMRecommendGroupApplyUIModel uiModel;
@property (nonatomic) NSString toast;
- (void)setUiModel:;
- (id)convertStatusCodeToUIModel:;
- (void)removeSchoolGroupWithChatModel:;
- (BOOL)canSendMessage;
- (id)handleEnterSchoolGroupEvent;
- (id)enterSchoolGroup;
- (id)applyJoinSDKSchoolGroup;
- (id)updateSchoolGroupStatus:chatModel:;
- (id)applyJoinSchoolGroup;
- (void)setModel:;
- (id)init;
- (id)model;
- (void).cxx_destruct;
- (void)setToast:;
- (id)toast;
- (id)uiModel;
@end

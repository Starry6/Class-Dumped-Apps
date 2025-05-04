@interface AWEPlayInteractionStrongifyShareVideoToIMUtils : NSObject
+ (id)AWEIMFeedShareGuideBarModelV2;
+ (BOOL)shouldShowByRecommendToFriendControlWithTrigerType:context:;
+ (id)AWEIMFeedShareGuideBarModel;
+ (id)AWEIMFeedShareGuideBarOptimizeExpModel;
+ (void)requestPitayaCanShowWithContext:;
+ (void)trackShareShowFailWithReasonType:reasonDetail:extDict:context:TrigerMode:;
+ (BOOL)checkShareModelIsValidWithShareModels:AndContext:;
+ (void)fetchShareModelWithContext:completionBlock:;
+ (id)transferTriggerModeToStringWithTrigerMode:;
+ (id)mergeAndFilterShareModels:withShareModels:;
+ (BOOL)p_filterGroupShareModel:;
+ (id)p_filterGroups:;
+ (id)p_findFirstGroupInShareModels:;
+ (unsigned long long)getCurrentModelFetchTypeContext:;
+ (void)p_imFetchShareModelFromRecentChatWithContext:completionBlock:;
+ (void)p_imFetchShareModelFromGroupRecUnfiyWithContext:completionBlock:;
+ (void)p_imFeedShareFromRecommendOrderWithContext:completionBlock:;
+ (BOOL)p_imFeedShareFromGroupRecUnifyEnableWithContext:;
+ (BOOL)p_imFeedShareFromUserRecUnfiyEnableWithContext:;
+ (id)filterShareModels:;
+ (BOOL)shouldEnableControlByRecommendToFriendWithTrigerType:;
+ (BOOL)canShowByRecommendToFriendWithTrigerType:context:;
@end

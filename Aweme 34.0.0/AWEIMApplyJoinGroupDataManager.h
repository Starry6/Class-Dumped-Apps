@interface AWEIMApplyJoinGroupDataManager : NSObject
@property (nonatomic) BOOL hasMoreData;
@property (nonatomic) NSArray dataList;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)setDataList:;
- (void)fetchNewestAuditListWithLimit:completion:;
- (void)fetchNewestAuditListWithConShortId:limit:completion:;
- (void)loadMoreAuditListWithLimit:completion:;
- (void)loadMoreAuditListWithConShortId:limit:completion:;
- (void)ackConversationApplyWithApplyID:agree:bizExt:completion:;
- (void)setConUnreadApplyCount:uniqueId:;
- (unsigned long long)getConUnreadApplyCount:;
- (void)setUnreadApplyConsume:uniqueId:;
- (BOOL)getUnreadApplyConsume:;
- (void)didReceiveJoinGroupApplyNoticeWithChatModel:;
- (BOOL)isJoinGroupApplyV2Enable;
- (BOOL)isJoinGroupApplyV3Enable;
- (id)auditManager;
- (void)fetchBatchApplyUnreadCountWith:completion:;
- (long long)findIndexOfApply:;
- (void)removeApplyFromDataListAtIndex:;
- (id)firstApplyModel;
- (id)init;
- (void).cxx_destruct;
- (BOOL)hasMoreData;
- (void)setHasMoreData:;
- (id)dataList;
+ (unsigned long long)getMessageNoticeConsume:;
+ (void)setMessageNoticeConsume:uniqueId:;
+ (id)sharedInstance;
@end

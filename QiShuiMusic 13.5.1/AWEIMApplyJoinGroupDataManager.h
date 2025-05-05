@interface AWEIMApplyJoinGroupDataManager : NSObject
@property (nonatomic) BOOL isRequesting;
@property (nonatomic) NSArray dataList;
- (id)firstApplyModel;
- (void)removeApplyFromDataListAtIndex:;
- (void)ackConversationApplyWithApplyID:agree:bizExt:completion:;
- (id)auditManager;
- (void)fetchNewestAuditListWithLimit:completion:;
- (long long)findIndexOfApply:;
- (BOOL)isRequesting;
- (void)loadMoreAuditListWithLimit:completion:;
- (void)setDataList:;
- (void)setIsRequesting:;
- (id)init;
- (void).cxx_destruct;
- (id)dataList;
@end

@interface AWEModelLayerNoticeNetworkProvider.CodeGenV1NoticeDelNetworkProvider : AWEDataLayerRootModelGetMethodNetworkProvider
@property (nonatomic) NSNumber noticeId;
@property (nonatomic) NSNumber group;
@property (nonatomic) NSNumber actionType;
@property (nonatomic) NSString noticeIds;
@property (nonatomic) NSString noticeIdStr;
@property (nonatomic) NSNumber noticeType;
- (id)networkDomain;
- (id)networkURLPath;
- (id)networkParams;
- (id)noticeId;
- (void)setNoticeId:;
- (id)noticeIds;
- (void)setNoticeIds:;
- (id)noticeIdStr;
- (void)setNoticeIdStr:;
- (void)setNoticeType:;
- (id)actionType;
- (void)setActionType:;
- (id)init;
- (void)setGroup:;
- (id)group;
- (void).cxx_destruct;
- (Class)modelClass;
- (id)noticeType;
+ (id)businessURI;
@end

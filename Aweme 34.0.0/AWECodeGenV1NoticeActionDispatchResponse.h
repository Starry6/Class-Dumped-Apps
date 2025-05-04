@interface AWECodeGenV1NoticeActionDispatchResponse : AWEBaseResponseModel
@property (nonatomic) q noticeId;
@property (nonatomic) q actionStatus;
@property (nonatomic) AWECodeGenActionResponseModel actionResponseModel;
@property (nonatomic) BOOL itemDisable;
@property (nonatomic) BOOL noticeDisable;
@property (nonatomic) NSArray failGroupsArray;
@property (nonatomic) NSArray disableKeysArray;
- (BOOL)itemDisable;
- (void)setItemDisable:;
- (BOOL)noticeDisable;
- (void)setNoticeDisable:;
- (long long)noticeId;
- (void)setNoticeId:;
- (id)disableKeysArray;
- (long long)actionStatus;
- (void)setActionStatus:;
- (id)actionResponseModel;
- (void)setActionResponseModel:;
- (id)failGroupsArray;
- (void)setFailGroupsArray:;
- (void)setDisableKeysArray:;
- (void).cxx_destruct;
+ (id)JSONKeyPathsByPropertyKey;
@end

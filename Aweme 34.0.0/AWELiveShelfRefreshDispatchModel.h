@interface AWELiveShelfRefreshDispatchModel : NSObject
@property (nonatomic) q tabId;
@property (nonatomic) Q actionType;
@property (nonatomic) BOOL isReuse;
@property (nonatomic) NSString anchorProductId;
@property (nonatomic) NSString cardId;
@property (nonatomic) BOOL isShowLoading;
@property (nonatomic) NSString requestReason;
@property (nonatomic) q messageUpdateType;
- (BOOL)isReuse;
- (void)setIsReuse:;
- (id)anchorProductId;
- (void)setAnchorProductId:;
- (id)getRefreshRequestReason;
- (BOOL)needHandleDispatch;
- (void)setIsShowLoading:;
- (BOOL)isShowLoading;
- (void)setMessageUpdateType:;
- (unsigned long long)actionType;
- (void)setActionType:;
- (id)requestReason;
- (void)setRequestReason:;
- (void).cxx_destruct;
- (id)cardId;
- (void)setCardId:;
- (void)setTabId:;
- (long long)tabId;
- (long long)messageUpdateType;
@end

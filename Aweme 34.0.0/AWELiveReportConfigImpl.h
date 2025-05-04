@interface AWELiveReportConfigImpl : NSObject
@property (nonatomic) <IESLiveInternalRouter> internalRouter;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)internalRouter;
- (void)setInternalRouter:;
- (void)performReportActionForHostCompletion:;
- (id)getReportCachedRoomIDs:;
- (void)reportUser:room:source:reportContent:contentId:;
- (void)reportUser:room:source:reportContent:contentId:completion:;
- (void)reportUser:params:completion:;
- (void)reportUser:params:;
- (void)cacheReportRoomID:cacheKey:;
- (void)executeReport;
- (long long)reportAnchorABType;
- (long long)reportCommentABType;
- (void).cxx_destruct;
@end

@interface AWERelatedRecommendDCTrackerManager : NSObject
@property (nonatomic) NSString innerFlowEntranceID;
- (void)refreshProcessID;
- (void)refreshEnterTimestamp;
- (void)refreshStayTimestamp;
- (void)smartPreloadTrackWith:context:;
- (void)trackManagerInitWith:;
- (id)innerFlowEntranceID;
- (void)setInnerFlowEntranceID:;
- (id)closeMethodWithType:;
- (id)init;
- (void).cxx_destruct;
+ (void)trackDCRecommedFooterShowWithModel:;
+ (void)trackDCRecommedFooterClickWithModel:;
+ (void)trackRecommedListFooterShowWithModel:;
+ (void)trackRecommedListFooterClickWithModel:;
+ (void)trackOuterDislikeWith:relatedModel:currentDislikeModel:feedbackInfo:;
+ (void)trackInnerDislikeWith:relatedModel:currentDislikeModel:feedbackInfo:;
+ (void)trackMentionDataRequestStatusWith:duration:isPreload:isFeedFinished:status:mentionModelCount:;
+ (long long)isPreloadFrom;
+ (void)setIsPreloadFrom:;
+ (id)processID;
+ (id)shared;
+ (void)setProcessID:;
@end

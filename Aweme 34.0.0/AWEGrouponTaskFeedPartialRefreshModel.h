@interface AWEGrouponTaskFeedPartialRefreshModel : NSObject
@property (nonatomic) NSString triggerEvent;
@property (nonatomic) q feedTabID;
@property (nonatomic) NSArray feedUpdateReqList;
@property (nonatomic) NSArray originDataList;
- (void)setFeedTabID:;
- (void)setFeedUpdateReqList:;
- (void)setOriginDataList:;
- (long long)feedTabID;
- (id)feedUpdateReqList;
- (id)originDataList;
- (id)triggerEvent;
- (void)setTriggerEvent:;
- (void).cxx_destruct;
@end

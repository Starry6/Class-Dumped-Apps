@interface AWEIMTranspondListDataTracker : NSObject
@property (nonatomic) NSMutableSet trackDataSetM;
@property (nonatomic) NSArray dataList;
- (void)setDataList:;
- (void)trackUserShowDataWithVisibleModels:;
- (void)setTrackDataSetM:;
- (id)trackDataSetM;
- (id)init;
- (void).cxx_destruct;
- (id)dataList;
@end

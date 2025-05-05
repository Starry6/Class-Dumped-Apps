@interface AWEIMTranspondListDataTracker : NSObject
@property (nonatomic) NSMutableSet trackDataSetM;
@property (nonatomic) NSArray dataList;
- (void)setDataList:;
- (void)setTrackDataSetM:;
- (id)trackDataSetM;
- (void)trackUserShowDataWithVisibleModels:;
- (id)init;
- (void).cxx_destruct;
- (id)dataList;
@end

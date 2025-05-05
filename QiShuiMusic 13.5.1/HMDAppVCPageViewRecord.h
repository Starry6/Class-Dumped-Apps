@interface HMDAppVCPageViewRecord : NSObject
@property (nonatomic) NSMutableDictionary pvInfo;
@property (nonatomic) NSInteger changedTimes;
- (id)getHistoryPageViewStatisticInfo;
- (int)changedTimes;
- (id)pvInfo;
- (void)recordPageViewForVCAsync:;
- (void)reportLastPageViewInfoAsync;
- (void)setChangedTimes:;
- (void)setPvInfo:;
- (void)writePageViewInfoToFileAsync;
- (id)init;
- (void).cxx_destruct;
+ (id)shared;
@end

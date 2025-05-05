@interface IESECListKitSettingConfig : NSObject
@property (nonatomic) NSNumber loadMoreRangeSize;
@property (nonatomic) NSNumber openDelayReportEvent;
- (id)loadMoreRangeSize;
- (id)openDelayReportEvent;
- (void)setLoadMoreRangeSize:;
- (void)setOpenDelayReportEvent:;
- (void).cxx_destruct;
+ (id)sharedInstance;
@end

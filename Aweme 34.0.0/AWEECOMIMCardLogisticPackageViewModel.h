@interface AWEECOMIMCardLogisticPackageViewModel : NSObject
@property (nonatomic) BOOL isPickUpSelfOrder;
@property (nonatomic) AWEECOMIMCardLogisticPackageModel dataModel;
@property (nonatomic) NSString logisticsInfo;
@property (nonatomic) NSString iconUrl;
@property (nonatomic) NSString progressDesc;
@property (nonatomic) NSString progressTitle;
@property (nonatomic) NSString progressTime;
@property (nonatomic) NSString distinctDesc;
@property (nonatomic) <AWEECOMIMSubCardTrackProtocol> tracker;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)iconUrl;
- (void)setIconUrl:;
- (id)progressTime;
- (void)setProgressTime:;
- (void)setProgressDesc:;
- (id)progressDesc;
- (id)distinctDesc;
- (void)setLogisticsInfo:;
- (id)logisticsInfo;
- (id)initWithDataModel:isPickUpSelfOrder:;
- (BOOL)isPickUpSelfOrder;
- (void)setDistinctDesc:;
- (id)tracker;
- (void)setTracker:;
- (void).cxx_destruct;
- (id)dataModel;
- (id)progressTitle;
- (void)setProgressTitle:;
@end

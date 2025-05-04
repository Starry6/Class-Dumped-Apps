@interface AWEAppStoreHistoryManager : NSObject
@property (nonatomic) AWEAwemeModel model;
@property (nonatomic) BOOL hasOrderGenerateRecord;
@property (nonatomic) <AWECommerceComponentContext> commerceContext;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)commerceContext;
- (void)setCommerceContext:;
- (void)setHasOrderGenerateRecord:;
- (void)handleOrderGenerateRecordNoti:;
- (BOOL)hasOrderGenerateRecord;
- (void)showOrderCenterSnackBar:;
- (void)setModel:;
- (id)init;
- (id)model;
- (void).cxx_destruct;
- (void)reset;
- (void)viewDidAppear;
- (void)willDisplay;
+ (BOOL)canShowComponentWithContext:;
+ (id)adServiceRecordSettingsSettings;
+ (BOOL)enableAppStoreHistoryManager;
+ (void)addAppDownloadHistoryWithAppID:extra:creativeID:downloadURL:;
@end

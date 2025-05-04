@interface AWETeenRecommendManager : NSObject
@property (nonatomic) NSMutableDictionary reportedMap;
@property (nonatomic) BOOL isRequesting;
@property (nonatomic) AWETeenRecommendAlert alert;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (BOOL)isRequesting;
- (void)setIsRequesting:;
- (BOOL)shouldShowLongPressPanelButton;
- (id)longPressPanelEntranceText;
- (void)reportTeenRecommendWithAweme:from:completion:;
- (BOOL)isAlertMaterialReady;
- (void)showTeenRecommendAlertWithCompletion:;
- (id)longPressPanelBubbleText;
- (void)complianceSettingsFinished;
- (void)setReportedMap:;
- (id)reportedMap;
- (void)alertDidDismiss;
- (void)clearCache;
- (id)init;
- (void)dealloc;
- (void).cxx_destruct;
- (void)setAlert:;
- (id)alert;
+ (id)sharedInstance;
@end

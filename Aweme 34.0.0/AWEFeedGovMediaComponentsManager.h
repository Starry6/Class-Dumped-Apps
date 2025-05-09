@interface AWEFeedGovMediaComponentsManager : NSObject
@property (nonatomic) NSMutableArray limitItemIdArray;
@property (nonatomic) NSMutableArray exemptItemIdArray;
@property (nonatomic) NSMutableDictionary limitTrackRecord;
@property (nonatomic) NSMutableDictionary exemptTrackRecord;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)exemptMonitor:withIdentifier:;
- (void)limitMonitor:withIdentifier:;
- (BOOL)trackRecordFilterWithItemID:componentID:isExempt:;
- (void)monitorHelper:withIdentifier:isExempt:;
- (id)exemptTrackRecord;
- (id)exemptItemIdArray;
- (id)limitTrackRecord;
- (id)limitItemIdArray;
- (void)setLimitItemIdArray:;
- (void)setExemptItemIdArray:;
- (void)setLimitTrackRecord:;
- (void)setExemptTrackRecord:;
- (void).cxx_destruct;
+ (BOOL)govMediaOptimizeSwitch;
+ (BOOL)shouldLimitGovMediaComponents:withIdentifier:;
+ (id)templateBottomBarIdentifierList;
+ (id)moduleIdentifierWhiteList;
+ (id)feedGovMediaComponentsConfig;
+ (BOOL)shouldLimitGovMediaComponents:;
+ (BOOL)shouldLimitExemptTemplateBottomBarWithIdentifier:aweme:;
+ (BOOL)shouldLimitExemptNormalBottomBarWithIdentifier:aweme:;
+ (id)shareInstance;
@end

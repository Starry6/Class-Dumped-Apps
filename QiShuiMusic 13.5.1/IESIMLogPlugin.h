@interface IESIMLogPlugin : NSObject
@property (nonatomic) NSArray trackerWhiteList;
@property (nonatomic) NSArray monitorWhiteList;
@property (nonatomic) <IESIMLogPluginDelegate> delegate;
@property (nonatomic) BOOL enableSDKTrackPerformance;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)convertToJsonDict:;
- (BOOL)enableSDKTrackPerformance;
- (void)logMessage:withLevel:withTag:withFileName:withFuncName:withLine:;
- (void)logService:name:data:;
- (id)monitorWhiteList;
- (void)setEnableSDKTrackPerformance:;
- (void)setMonitorWhiteList:;
- (void)setTrackerWhiteList:;
- (id)trackerWhiteList;
- (id)init;
- (void)setDelegate:;
- (id)delegate;
- (void).cxx_destruct;
+ (id)sharedInstance;
@end

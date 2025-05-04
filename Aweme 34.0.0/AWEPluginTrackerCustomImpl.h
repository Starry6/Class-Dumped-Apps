@interface AWEPluginTrackerCustomImpl : NSObject
@property (nonatomic) NSArray commonParamKeys;
@property (nonatomic) NSArray localCommonParamKeys;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)commonParamKeys;
- (id)localCommonParamKeys;
- (void)bdp_event:params:;
- (void)bdp_eventV1Label:eventName:extraData:;
- (id)bdp_commonTrackParamsWithSchema:;
- (void)setCommonParamKeys:;
- (void)setLocalCommonParamKeys:;
- (void).cxx_destruct;
+ (id)sharedPlugin;
@end

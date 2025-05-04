@interface AWEConcernSyncFansSwitchHandler : NSObject
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)fetchSettingsWithKeys:completion:;
- (void)fetchSyncFansSwitchStatusWithCompletion:;
- (id)urlPath;
@end

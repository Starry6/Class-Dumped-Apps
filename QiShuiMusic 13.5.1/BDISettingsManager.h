@interface BDISettingsManager : NSObject
@property (nonatomic) q lastCheck;
@property (nonatomic) NSDictionary settings;
@property (nonatomic) NSDictionary vidInfo;
- (id)getVids;
- (id)vidInfo;
- (void)addNotifyObserver;
- (void)didStartUp;
- (void)handleResponse:jsonObj:error:;
- (long long)lastCheck;
- (BOOL)s_boolValueForKey:;
- (long long)s_integerValueForKey:;
- (id)s_objectValueForKey:;
- (id)s_stringValueForKey:;
- (void)setLastCheck:;
- (void)setVidInfo:;
- (void)syncSettings:;
- (void)dealloc;
- (id)settings;
- (void)setSettings:;
- (void)willEnterForeground;
- (void).cxx_destruct;
+ (id)sharedInstance;
@end

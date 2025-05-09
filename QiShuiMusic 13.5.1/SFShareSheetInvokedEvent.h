@interface SFShareSheetInvokedEvent : NSObject
@property (nonatomic) NSInteger daemonPID;
@property (nonatomic) NSString appBundleId;
@property (nonatomic) NSString suggestionsHash;
@property (nonatomic) q numberOfSuggestions;
@property (nonatomic) q durationInMS;
@property (nonatomic) q cacheFileCount;
@property (nonatomic) q totalCacheAccessCount;
@property (nonatomic) BOOL isDarkMode;
@property (nonatomic) BOOL isCollaborative;
@property (nonatomic) NSDictionary cacheAccessInfo;
@property (nonatomic) NSDictionary eventPayload;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)setAppBundleId:;
- (id)appBundleId;
- (id)eventPayload;
- (void).cxx_destruct;
- (BOOL)isDarkMode;
- (BOOL)isCollaborative;
- (void)setIsCollaborative:;
- (void)submitEvent;
- (int)daemonPID;
- (void)setDaemonPID:;
- (id)suggestionsHash;
- (void)setSuggestionsHash:;
- (long long)numberOfSuggestions;
- (void)setNumberOfSuggestions:;
- (long long)durationInMS;
- (void)setDurationInMS:;
- (long long)cacheFileCount;
- (void)setCacheFileCount:;
- (long long)totalCacheAccessCount;
- (void)setTotalCacheAccessCount:;
- (void)setIsDarkMode:;
- (id)cacheAccessInfo;
- (void)setCacheAccessInfo:;
+ (id)eventName;
@end

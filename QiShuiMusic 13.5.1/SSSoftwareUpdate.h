@interface SSSoftwareUpdate : NSObject
@property (nonatomic) NSDictionary updateDictionary;
@property (nonatomic) NSString bundleIdentifier;
@property (nonatomic) NSDate installDate;
@property (nonatomic) q parentalControlsRank;
@property (nonatomic) q storeItemIdentifier;
@property (nonatomic) q updateState;
- (id)bundleIdentifier;
- (void)dealloc;
- (long long)storeItemIdentifier;
- (long long)updateState;
- (id)installDate;
- (void)setInstallDate:;
- (id)updateDictionary;
- (id)initWithUpdateDictionary:;
- (long long)parentalControlsRank;
- (void)setUpdateState:;
@end

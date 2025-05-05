@interface SFDeviceQueryParameters : NSObject
@property (nonatomic) MAAssetQuery maQuery;
@property (nonatomic) BOOL installedOnly;
@property (nonatomic) BOOL imperfectMatch;
@property (nonatomic) BOOL fallback;
@property (nonatomic) NSString queryType;
- (BOOL)fallback;
- (id)maQuery;
- (unsigned long long)hash;
- (void).cxx_destruct;
- (id)description;
- (id)queryType;
- (BOOL)installedOnly;
- (BOOL)isEqual:;
- (id)initWithDeviceAssetQuery:installedOnly:imperfectMatch:fallback:;
- (id)maAssetQueryDescription;
- (BOOL)imperfectMatch;
@end

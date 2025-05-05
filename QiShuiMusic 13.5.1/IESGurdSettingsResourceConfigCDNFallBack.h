@interface IESGurdSettingsResourceConfigCDNFallBack : NSObject
@property (nonatomic) NSArray domainsArray;
@property (nonatomic) q maxAttempts;
@property (nonatomic) BOOL shuffle;
- (id)domainsArray;
- (void)setDomainsArray:;
- (void)setShuffle:;
- (void).cxx_destruct;
- (long long)maxAttempts;
- (void)setMaxAttempts:;
- (BOOL)shuffle;
+ (id)configWithDictionary:;
@end

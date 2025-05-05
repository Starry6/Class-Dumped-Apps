@interface MKPunchoutOptions : NSObject
@property (nonatomic) NSURL urlToOpen;
@property (nonatomic) NSString appBundleIdentifier;
@property (nonatomic) q strategy;
- (long long)strategy;
- (void)setAppBundleIdentifier:;
- (id)appBundleIdentifier;
- (void).cxx_destruct;
- (void)setStrategy:;
- (id)urlToOpen;
- (void)setUrlToOpen:;
+ (id)punchoutOptionsForURLStrings:withAttribution:;
@end

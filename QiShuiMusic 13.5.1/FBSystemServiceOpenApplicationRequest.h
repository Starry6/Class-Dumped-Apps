@interface FBSystemServiceOpenApplicationRequest : NSObject
@property (nonatomic) BOOL trusted;
@property (nonatomic) NSString bundleIdentifier;
@property (nonatomic) FBSOpenApplicationOptions options;
@property (nonatomic) FBProcess clientProcess;
- (void)setOptions:;
- (id)bundleIdentifier;
- (id)initWithBundleId:;
- (void)setBundleIdentifier:;
- (BOOL)isTrusted;
- (void)setTrusted:;
- (id)options;
- (void).cxx_destruct;
- (void)setClientProcess:;
- (id)clientProcess;
- (id)description;
@end

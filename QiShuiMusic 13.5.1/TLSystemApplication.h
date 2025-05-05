@interface TLSystemApplication : NSObject
@property (nonatomic) NSString bundleIdentifier;
@property (nonatomic) NSString name;
- (id)bundleIdentifier;
- (id)initWithBundleIdentifier:name:;
- (void).cxx_destruct;
- (id)name;
+ (id)defaultSystemApplication;
@end

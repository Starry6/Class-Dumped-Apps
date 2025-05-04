@interface AWELynxBundle : NSObject
@property (nonatomic) NSString version;
@property (nonatomic) NSURL bundleFileURL;
@property (nonatomic) NSArray modules;
- (id)initWithFileURL:fileName:;
- (id)initWithSingleBundleFileURL:fileName:;
- (id)bundleFileURL;
- (id)version;
- (id)modules;
- (void).cxx_destruct;
@end

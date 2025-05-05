@interface RBSWrappedLSInfo : NSObject
@property (nonatomic) NSString bundleID;
@property (nonatomic) NSString personaString;
- (id)_initWithBundleID:personaString:;
- (id)personaString;
- (void).cxx_destruct;
- (id)bundleID;
+ (id)infoWithBundleID:personaString:;
@end

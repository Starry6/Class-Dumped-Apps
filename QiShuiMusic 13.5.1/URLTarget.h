@interface URLTarget : NSObject
@property (nonatomic) NSString bundleID;
@property (nonatomic) q defaultIndex;
@property (nonatomic) NSString normalScheme;
@property (nonatomic) NSString secureScheme;
- (id)secureScheme;
- (void)setSecureScheme:;
- (void).cxx_destruct;
- (id)bundleID;
- (void)setBundleID:;
- (id)initWithBundle:scheme:secureScheme:;
- (long long)defaultIndex;
- (void)setDefaultIndex:;
- (id)normalScheme;
- (void)setNormalScheme:;
+ (id)targetWithBundle:scheme:secureScheme:;
@end

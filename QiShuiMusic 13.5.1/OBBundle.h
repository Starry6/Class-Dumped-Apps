@interface OBBundle : NSObject
@property (nonatomic) BOOL isPlaceholder;
@property (nonatomic) NSBundle underlyingBundle;
@property (nonatomic) NSString identifier;
@property (nonatomic) NSString bundleVersion;
@property (nonatomic) NSBundle bundle;
- (id)bundleVersion;
- (BOOL)isPlaceholder;
- (void)setIsPlaceholder:;
- (id)identifier;
- (id)privacyFlow;
- (id)initWithBundle:placeholderIdentifier:;
- (id)bundle;
- (id)underlyingBundle;
- (void).cxx_destruct;
- (id)initWithBundle:;
+ (id)bundleWithIdentifier:;
+ (id)bundleAtPath:placeholderIdentifier:;
+ (id)bundleAtPath:;
@end

@interface UISystemNavigationActionDestinationContext : NSObject
@property (nonatomic) NSString title;
@property (nonatomic) NSString bundleId;
@property (nonatomic) NSURL URL;
@property (nonatomic) NSString sceneIdentifier;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)encodeWithXPCDictionary:;
- (id)bundleId;
- (id)sceneIdentifier;
- (void)setTitle:;
- (void)setSceneIdentifier:;
- (id)debugDescription;
- (id)initWithXPCDictionary:;
- (id)title;
- (void).cxx_destruct;
- (void)setBundleId:;
- (void)setURL:;
- (id)URL;
+ (id)systemNavigationActionContextWithTitle:sceneIdentifier:;
+ (id)systemNavigationActionContextWithTitle:bundleId:;
+ (id)systemNavigationActionContextWithURL:;
+ (id)systemNavigationActionContextWithTitle:andURL:;
@end

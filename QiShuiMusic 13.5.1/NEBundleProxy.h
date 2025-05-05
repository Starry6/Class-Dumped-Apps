@interface NEBundleProxy : NSObject
@property (nonatomic) NSString identifier;
@property (nonatomic) NSURL url;
@property (nonatomic) NSArray machOUUIDs;
@property (nonatomic) NSString name;
@property (nonatomic) BOOL isWatchKitApp;
- (id)url;
- (id)machOUUIDs;
- (id)identifier;
- (id)initWithCoder:;
- (void)encodeWithCoder:;
- (void).cxx_destruct;
- (id)initWithIdentifier:url:machOUUIDs:name:;
- (id)name;
- (BOOL)isWatchKitApp;
- (void)setIsWatchKitApp:;
+ (BOOL)supportsSecureCoding;
@end

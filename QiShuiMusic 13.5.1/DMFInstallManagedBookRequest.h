@interface DMFInstallManagedBookRequest : DMFTaskRequest
@property (nonatomic) NSString originator;
@property (nonatomic) NSNumber iTunesStoreID;
@property (nonatomic) NSString persistentID;
@property (nonatomic) NSString author;
@property (nonatomic) NSString title;
@property (nonatomic) NSString version;
@property (nonatomic) NSURL URL;
@property (nonatomic) Q type;
- (id)originator;
- (void)setOriginator:;
- (void)setVersion:;
- (id)version;
- (void)setType:;
- (id)author;
- (void)setTitle:;
- (id)initWithCoder:;
- (void)encodeWithCoder:;
- (unsigned long long)type;
- (id)title;
- (void).cxx_destruct;
- (void)setAuthor:;
- (void)setURL:;
- (id)URL;
- (id)persistentID;
- (void)setPersistentID:;
- (id)iTunesStoreID;
- (void)setITunesStoreID:;
+ (BOOL)supportsSecureCoding;
+ (id)permittedPlatforms;
+ (BOOL)isPermittedOnUserConnection;
+ (BOOL)isPermittedOnSystemConnection;
+ (Class)allowlistedClassForResultObject;
@end

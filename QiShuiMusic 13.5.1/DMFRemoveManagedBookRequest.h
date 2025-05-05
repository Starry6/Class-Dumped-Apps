@interface DMFRemoveManagedBookRequest : DMFTaskRequest
@property (nonatomic) NSNumber iTunesStoreID;
@property (nonatomic) NSString persistentID;
- (id)initWithCoder:;
- (void)encodeWithCoder:;
- (void).cxx_destruct;
- (id)persistentID;
- (void)setPersistentID:;
- (id)iTunesStoreID;
- (void)setITunesStoreID:;
+ (BOOL)supportsSecureCoding;
+ (id)permittedPlatforms;
+ (BOOL)isPermittedOnUserConnection;
+ (BOOL)isPermittedOnSystemConnection;
@end

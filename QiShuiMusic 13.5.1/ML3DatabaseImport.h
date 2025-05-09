@interface ML3DatabaseImport : NSObject
@property (nonatomic) NSString libraryPath;
@property (nonatomic) NSData trackData;
@property (nonatomic) NSData playlistData;
@property (nonatomic) NSFileHandle fileHandle;
@property (nonatomic) NSString syncAnchor;
@property (nonatomic) BOOL resetSync;
@property (nonatomic) BOOL sagaEnabled;
@property (nonatomic) q storeAccountID;
@property (nonatomic) q preferredVideoQuality;
@property (nonatomic) I homeSharingBasePlaylistID;
@property (nonatomic) BOOL tracksAreLibraryOwnedContent;
@property (nonatomic) BOOL playlistsAreLibraryOwnedContent;
@property (nonatomic) BOOL pendingMatch;
@property (nonatomic) BOOL isServerImport;
@property (nonatomic) NSString syncLibraryID;
@property (nonatomic) BOOL suspendable;
@property (nonatomic) NSObject<OS_tcc_identity> clientIdentity;
- (id)fileHandle;
- (id)init;
- (id)syncAnchor;
- (long long)preferredVideoQuality;
- (id)initWithCoder:;
- (id)libraryPath;
- (id)clientIdentity;
- (void)encodeWithCoder:;
- (void).cxx_destruct;
- (id)description;
- (id)mutableCopyWithZone:;
- (id)copyWithZone:;
- (id)_copyWithZone:usingConcreteClass:;
- (id)trackData;
- (id)initWithLibraryPath:trackData:playlistData:;
- (long long)storeAccountID;
- (id)syncLibraryID;
- (id)initWithLibraryPath:trackData:playlistData:clientIdentity:;
- (id)playlistData;
- (BOOL)isResetSync;
- (BOOL)isSagaEnabled;
- (unsigned int)homeSharingBasePlaylistID;
- (BOOL)tracksAreLibraryOwnedContent;
- (BOOL)playlistsAreLibraryOwnedContent;
- (BOOL)isPendingMatch;
- (BOOL)isServerImport;
- (BOOL)isSuspendable;
+ (BOOL)supportsSecureCoding;
@end

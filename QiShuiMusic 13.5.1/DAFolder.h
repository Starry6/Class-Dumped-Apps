@interface DAFolder : NSObject
@property (nonatomic) BOOL hasRemoteChanges;
@property (nonatomic) NSString folderName;
@property (nonatomic) NSString folderID;
@property (nonatomic) NSString parentFolderID;
@property (nonatomic) q dataclass;
@property (nonatomic) BOOL isDefault;
- (BOOL)isDefault;
- (void)setDataclass:;
- (id)folderID;
- (unsigned long long)hash;
- (long long)dataclass;
- (void)setIsDefault:;
- (void).cxx_destruct;
- (id)description;
- (BOOL)isEqual:;
- (id)folderName;
- (id)parentFolderID;
- (void)setFolderID:;
- (void)setFolderName:;
- (id)mailboxID;
- (id)parentMailboxID;
- (void)setParentFolderID:;
- (BOOL)hasRemoteChanges;
- (void)setHasRemoteChanges:;
@end

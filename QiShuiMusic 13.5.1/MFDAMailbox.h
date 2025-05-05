@interface MFDAMailbox : MFMailboxUid
@property (nonatomic) NSString folderID;
- (id)folderID;
- (id)displayName;
- (void).cxx_destruct;
- (id)dictionaryRepresentation;
- (void)setFolderID:;
- (id)_folderID;
- (id)_privacySafeDescription;
- (BOOL)mergeWithUserInfo:;
- (id)initWithName:attributes:account:folderID:;
- (id)URLWithAccount:;
@end

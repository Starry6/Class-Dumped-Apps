@interface BRQueryItem : NSObject
@property (nonatomic) NSData contentVersion;
@property (nonatomic) NSData structureVersion;
@property (nonatomic) S diffs;
@property (nonatomic) S br_downloadStatus;
@property (nonatomic) S br_uploadStatus;
@property (nonatomic) I br_shareOptions;
@property (nonatomic) BOOL isInTransfer;
@property (nonatomic) BOOL isConflicted;
@property (nonatomic) BOOL isLive;
@property (nonatomic) BOOL isDead;
@property (nonatomic) BOOL isDocument;
@property (nonatomic) BOOL isDirectory;
@property (nonatomic) BOOL isSymlink;
@property (nonatomic) BOOL isFinderBookmark;
@property (nonatomic) BOOL isPreCrash;
@property (nonatomic) BOOL isUploadActive;
@property (nonatomic) BOOL isDownloadActive;
@property (nonatomic) NSNumber isDownloadRequested;
@property (nonatomic) BOOL editedSinceShared;
@property (nonatomic) BOOL isBRAlias;
@property (nonatomic) BOOL isTrashed;
@property (nonatomic) BOOL isEvictable;
@property (nonatomic) NSString appLibraryID;
@property (nonatomic) NSString parentPath;
@property (nonatomic) NSString logicalName;
@property (nonatomic) NSString physicalName;
@property (nonatomic) BRFileObjectID fileObjectID;
@property (nonatomic) NSNumber size;
@property (nonatomic) NSNumber mtime;
@property (nonatomic) NSNumber btime;
@property (nonatomic) NSNumber lastUsedTime;
@property (nonatomic) NSNumber favoriteRank;
@property (nonatomic) NSString collaborationIdentifier;
@property (nonatomic) BOOL fromRelativePath;
@property (nonatomic) NSURL url;
@property (nonatomic) NSURL localRepresentationURL;
@property (nonatomic) NSString path;
@property (nonatomic) BOOL isNetworkOffline;
@property (nonatomic) @ replacement;
@property (nonatomic) NSURL fileURL;
@property (nonatomic) NSNumber hasUnresolvedConflicts;
@property (nonatomic) NSString containerDisplayName;
@property (nonatomic) NSNumber downloadRequested;
@property (nonatomic) BOOL hidden;
@property (nonatomic) NSString providerIdentifier;
@property (nonatomic) NSString sharingPermissions;
@property (nonatomic) NSString fp_spotlightDomainIdentifier;
@property (nonatomic) NSString fp_domainIdentifier;
@property (nonatomic) NSString fp_parentDomainIdentifier;
@property (nonatomic) BOOL fp_ubiquitous;
@property (nonatomic) NSArray conflictingVersions;
@property (nonatomic) BOOL fp_isContainer;
@property (nonatomic) BOOL fp_isContainerPristine;
@property (nonatomic) BOOL fp_isCloudDocsContainer;
@property (nonatomic) NSString fp_cloudContainerIdentifier;
@property (nonatomic) NSSet fp_cloudContainerClientBundleIdentifiers;
@property (nonatomic) NSString displayName;
@property (nonatomic) BOOL topLevelSharedItem;
@property (nonatomic) NSData quarantineBlob;
@property (nonatomic) BOOL syncRoot;
@property (nonatomic) NSString fileSystemFilename;
@property (nonatomic) BOOL excludedFromSync;
@property (nonatomic) BOOL fp_lastModifiedByCurrentUser;
@property (nonatomic) BOOL fp_addedByCurrentUser;
@property (nonatomic) NSPersonNameComponents fp_addedByNameComponents;
@property (nonatomic) NSString preformattedOwnerName;
@property (nonatomic) NSString preformattedMostRecentEditorName;
@property (nonatomic) BOOL isCollaborationInvitation;
@property (nonatomic) NSString itemIdentifier;
@property (nonatomic) NSString parentItemIdentifier;
@property (nonatomic) NSString filename;
@property (nonatomic) UTType contentType;
@property (nonatomic) NSString typeIdentifier;
@property (nonatomic) {NSFileProviderTypeAndCreator=II} typeAndCreator;
@property (nonatomic) Q capabilities;
@property (nonatomic) Q fileSystemFlags;
@property (nonatomic) NSNumber documentSize;
@property (nonatomic) NSNumber childItemCount;
@property (nonatomic) NSDate creationDate;
@property (nonatomic) NSDate contentModificationDate;
@property (nonatomic) NSDictionary extendedAttributes;
@property (nonatomic) NSDate lastUsedDate;
@property (nonatomic) NSData tagData;
@property (nonatomic) BOOL trashed;
@property (nonatomic) BOOL uploaded;
@property (nonatomic) BOOL uploading;
@property (nonatomic) NSError uploadingError;
@property (nonatomic) BOOL downloaded;
@property (nonatomic) BOOL downloading;
@property (nonatomic) NSError downloadingError;
@property (nonatomic) BOOL mostRecentVersionDownloaded;
@property (nonatomic) BOOL shared;
@property (nonatomic) BOOL sharedByCurrentUser;
@property (nonatomic) NSPersonNameComponents ownerNameComponents;
@property (nonatomic) NSPersonNameComponents mostRecentEditorNameComponents;
@property (nonatomic) NSData versionIdentifier;
@property (nonatomic) NSFileProviderItemVersion itemVersion;
@property (nonatomic) NSString symlinkTargetPath;
@property (nonatomic) NSDictionary userInfo;
@property (nonatomic) q contentPolicy;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
@property (nonatomic) NSArray decorations;
- (BOOL)isDirectory;
- (id)filePath;
- (id)fileSize;
- (id)path;
- (id)itemIdentifier;
- (id)filename;
- (id)valueForKey:;
- (id)parentPath;
- (id)url;
- (void)dealloc;
- (unsigned long long)capabilities;
- (id)userInfo;
- (BOOL)isShared;
- (id)parentItemIdentifier;
- (id)contentVersion;
- (id)owner;
- (id)versionIdentifier;
- (BOOL)isLive;
- (id)initWithCoder:;
- (unsigned long long)hash;
- (id)displayName;
- (id)typeIdentifier;
- (void)encodeWithCoder:;
- (void)merge:;
- (BOOL)isDownloading;
- (void)setAttribute:forKey:;
- (id)lastUsedTime;
- (void).cxx_destruct;
- (id)fileURL;
- (BOOL)isDead;
- (id)decorations;
- (id)description;
- (id)lastUsedDate;
- (BOOL)isHidden;
- (BOOL)isEqual:;
- (id)extendedAttributes;
- (id)copyWithZone:;
- (id)size;
- (id)creationDate;
- (id)attributesForNames:;
- (id)attributeNames;
- (id)attributeForName:;
- (BOOL)isPackage;
- (id)replacement;
- (id)initWithFPItem:;
- (id)containerDisplayName;
- (BOOL)isUploaded;
- (id)collaborationIdentifier;
- (id)attributeForKey:;
- (id)contentModificationDate;
- (BOOL)isTrashed;
- (BOOL)isUploading;
- (id)favoriteRank;
- (id)downloadingStatus;
- (BOOL)isDownloaded;
- (void)setReplacement:;
- (unsigned long long)fileSystemFlags;
- (id)documentSize;
- (id)childItemCount;
- (id)tagData;
- (id)uploadingError;
- (id)downloadingError;
- (BOOL)isMostRecentVersionDownloaded;
- (BOOL)isSharedByCurrentUser;
- (id)ownerNameComponents;
- (id)mostRecentEditorNameComponents;
- (id)itemVersion;
- (id)symlinkTargetPath;
- (id)hasUnresolvedConflicts;
- (id)isDownloadRequested;
- (id)sharingPermissions;
- (id)fp_spotlightDomainIdentifier;
- (BOOL)fp_isContainer;
- (BOOL)fp_isContainerPristine;
- (id)fp_cloudContainerIdentifier;
- (BOOL)isTopLevelSharedItem;
- (BOOL)fp_isLastModifiedByCurrentUser;
- (id)containerIDIfDesktopOrDocuments;
- (id)localizedFileNameIfDesktopOrDocuments;
- (BOOL)_isFPFSItem;
- (BOOL)_isInSharedZone;
- (BOOL)_isSharedFolderSubItem;
- (BOOL)fromRelativePath;
- (id)localRepresentationURL;
- (unsigned short)diffs;
- (id)fileObjectID;
- (id)logicalName;
- (id)physicalName;
- (id)appLibraryID;
- (BOOL)isTopLevel;
- (id)mtime;
- (id)btime;
- (BOOL)isNetworkOffline;
- (void)setIsNetworkOffline:;
- (id)parentFileID;
- (unsigned short)br_downloadStatus;
- (unsigned short)br_uploadStatus;
- (unsigned int)br_shareOptions;
- (BOOL)isInTransfer;
- (BOOL)isConflicted;
- (void)markDead;
- (void)clearDiffs;
- (BOOL)isPreCrash;
- (void)setIsPreCrash:;
- (BOOL)isDownloadActive;
- (BOOL)isUploadActive;
- (BOOL)isSymlink;
- (BOOL)isFinderBookmark;
- (BOOL)isDocument;
- (BOOL)isBRAlias;
- (BOOL)editedSinceShared;
- (BOOL)isEvictable;
- (BOOL)isHiddenExt;
- (id)sharedItemRole;
- (void)attachLogicalExtension:physicalExtension:;
- (id)initWithQueryItem:;
- (id)subclassDescription;
- (BOOL)isEqualToQueryItem:;
- (void)_mergeAttrs:;
- (void)_mergeURL:;
- (BOOL)canMerge:;
- (void)mergeProgressUpdate:;
- (id)asFileProviderItem;
- (id)structureVersion;
+ (BOOL)supportsSecureCoding;
+ (id)containerItemForContainer:forceScan:;
+ (id)askDaemonQueryItemForURL:andFakeFSEvent:error:;
+ (id)containerItemForContainer:withRepresentativeItem:zoneRowID:;
+ (id)askDaemonQueryItemForURL:error:;
+ (id)containerItemForContainer:withRepresentativeItem:;
@end

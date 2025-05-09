@interface FINode : NSObject
@property (nonatomic) @ identifier;
@property (nonatomic) NSString displayName;
@property (nonatomic) FPItem fpfs_fpItem;
@property (nonatomic) BOOL supportsFileSystemEnumeration;
@property (nonatomic) UTType contentType;
@property (nonatomic) NSString typeIdentifier;
@property (nonatomic) BOOL isFolder;
@property (nonatomic) Q folderType;
@property (nonatomic) NSURL nodeURL;
@property (nonatomic) NSNumber fileSize;
@property (nonatomic) NSNumber childItemCount;
@property (nonatomic) NSString providerDomainID;
@property (nonatomic) NSString providerID;
@property (nonatomic) FPProviderDomain cachedDomain;
@property (nonatomic) NSString domainDisplayName;
@property (nonatomic) NSDate modificationDate;
@property (nonatomic) NSDate doc_creationDate;
@property (nonatomic) NSDate doc_lastUsedDate;
@property (nonatomic) NSDate dateForSortingByRecents;
@property (nonatomic) NSString filename;
@property (nonatomic) BOOL isActionable;
@property (nonatomic) BOOL isReadable;
@property (nonatomic) BOOL isWritable;
@property (nonatomic) BOOL isPending;
@property (nonatomic) BOOL isExternalDownloadPlaceholder;
@property (nonatomic) BOOL isCloudItem;
@property (nonatomic) BOOL isContainer;
@property (nonatomic) BOOL isRootItem;
@property (nonatomic) BOOL trashed;
@property (nonatomic) BOOL downloading;
@property (nonatomic) BOOL downloaded;
@property (nonatomic) NSProgress downloadingProgress;
@property (nonatomic) NSError downloadingError;
@property (nonatomic) BOOL uploading;
@property (nonatomic) BOOL uploaded;
@property (nonatomic) NSProgress uploadingProgress;
@property (nonatomic) NSError uploadingError;
@property (nonatomic) NSProgress copyingProgress;
@property (nonatomic) BOOL excludedFromSync;
@property (nonatomic) BOOL shared;
@property (nonatomic) BOOL sharedByCurrentUser;
@property (nonatomic) BOOL isTopLevelSharedItem;
@property (nonatomic) NSPersonNameComponents ownerNameComponents;
@property (nonatomic) NSArray itemDecorations;
@property (nonatomic) NSArray tags;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
@property (nonatomic) BRContainer brContainer;
@property (nonatomic) FINode brContainerDocuments;
@property (nonatomic) FINode parent;
@property (nonatomic) NSDate creationDate;
@property (nonatomic) NSDate contentModificationDate;
@property (nonatomic) NSString displayName;
@property (nonatomic) NSString fileName;
@property (nonatomic) NSString itemIdentifier;
@property (nonatomic) NSNumber documentSize;
@property (nonatomic) NSURL fileURL;
@property (nonatomic) FPItem fpItem;
@property (nonatomic) BOOL isFolder;
@property (nonatomic) BOOL isPackage;
@property (nonatomic) NSDate lastUsedDate;
@property (nonatomic) UTType contentType;
@property (nonatomic) NSString typeIdentifier;
@property (nonatomic) FPProviderDomain fpDomain;
@property (nonatomic) NSArray tags;
@property (nonatomic) NSError enumeratorError;
@property (nonatomic) NSNumber childItemCount;
@property (nonatomic) NSArray itemDecorations;
@property (nonatomic) BOOL isShared;
@property (nonatomic) BOOL isSharedByCurrentUser;
@property (nonatomic) BOOL isTopLevelSharedItem;
@property (nonatomic) BOOL isTrashed;
@property (nonatomic) NSPersonNameComponents ownerNameComponents;
- (id)fileSize;
- (id)providerID;
- (id)providerDomainID;
- (id)filename;
- (BOOL)isContainer;
- (id)identifier;
- (id)modificationDate;
- (BOOL)isWritable;
- (id)domainDisplayName;
- (BOOL)isDownloading;
- (unsigned long long)folderType;
- (BOOL)isPending;
- (BOOL)isReadable;
- (BOOL)isActionable;
- (BOOL)isUploaded;
- (BOOL)isUploading;
- (BOOL)isCloudItem;
- (BOOL)isDownloaded;
- (id)downloadingProgress;
- (id)uploadingProgress;
- (id)uploadingError;
- (id)downloadingError;
- (BOOL)isExcludedFromSync;
- (id)copyingProgress;
- (BOOL)isExternalDownloadPlaceholder;
- (BOOL)isRootItem;
- (void)encodeNodeWithCoder:;
- (id)fpfs_fpItem;
- (id)cachedDomain;
- (BOOL)supportsFileSystemEnumeration;
- (id)nodeURL;
- (id)doc_creationDate;
- (id)doc_lastUsedDate;
- (id)dateForSortingByRecents;
- (long long)_doc_fileTypeCompare:;
- (long long)localizedStandardTagsCompareNode:;
- (void)fetchParent:;
- (id)itemIdentifier;
- (id)tags;
- (id)fileName;
- (BOOL)isShared;
- (id)contentType;
- (BOOL)isFolder;
- (unsigned long long)hash;
- (id)mutableCopy;
- (id)displayName;
- (id)typeIdentifier;
- (id)fileURL;
- (id)lastUsedDate;
- (id)original;
- (id)longDescription;
- (id)parent;
- (id)copyWithZone:;
- (id)creationDate;
- (BOOL)isPackage;
- (id)contentModificationDate;
- (BOOL)isTrashed;
- (id)fpItem;
- (id)documentSize;
- (id)childItemCount;
- (BOOL)isSharedByCurrentUser;
- (id)ownerNameComponents;
- (BOOL)isTopLevelSharedItem;
- (id)itemDecorations;
- (id)propertyAsNumber:;
- (id)propertyAsDate:;
- (id)propertyAsString:;
- (id)propertyAsArray:;
- (id)propertyAsNSObject:;
- (id)propertyAsDictionary:;
- (BOOL)propertyAsBool:;
- (id)fetchTags:;
- (id)fetchLastUsedDate:;
- (unsigned long long)nodeIs:;
- (unsigned int)nodePermissions:;
- (void)inlineProgressCancel;
- (id)fpDomain;
- (id)enumeratorError;
- (id)nodeRef;
- (id)asTNode;
- (id)fsInfo;
- (id)brContainer;
- (id)brContainerDocuments;
- (void)_forEachNodeDeep:;
+ (void)end;
+ (void)start;
+ (id)nodeFromNodeRef:;
+ (int)desktopServicesAPIVersion;
+ (id)fiNodeFromURL:;
+ (id)iCloudLibrariesContainer;
+ (id)iCloudDefaultContainer;
+ (id)dataSeparatedICloudLibrariesContainer;
+ (id)dataSeparatedICloudDefaultContainer;
+ (id)providerDomainsContainer;
+ (id)sizeFolder:;
+ (id)sizeFolder:forCopyInto:withDelegate:;
+ (void)_forEachNodeDeep:;
+ (id)_allInstances;
+ (id)_allRootInstances;
@end

@interface PLShare : PLManagedObject
@property (nonatomic) NSString uuid;
@property (nonatomic) NSString scopeIdentifier;
@property (nonatomic) NSString title;
@property (nonatomic) NSDate creationDate;
@property (nonatomic) NSURL shareURL;
@property (nonatomic) NSDate expiryDate;
@property (nonatomic) NSDate trashedDate;
@property (nonatomic) s status;
@property (nonatomic) q scopeType;
@property (nonatomic) q publicPermission;
@property (nonatomic) s localPublishState;
@property (nonatomic) s trashedState;
@property (nonatomic) s cloudDeleteState;
@property (nonatomic) NSSet participants;
@property (nonatomic) q cloudDeletionType;
@property (nonatomic) NSString cloudUUIDForDeletion;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)compactDescription;
- (id)cloudUUIDForDeletion;
- (id)_statusDescription;
- (long long)cloudDeletionType;
- (void)prepareForDeletion;
- (id)owner;
- (long long)publicPermission;
- (long long)scopeType;
- (void)setPublicPermission:;
- (id)currentUserParticipant;
- (void)setScopeType:;
- (BOOL)incrementallyDeleteAndSaveWithError:;
- (void)trash;
- (void)untrash;
- (void)acceptWithCompletionHandler:;
- (id)cplScopeChange;
- (void)publishWithCompletionHandler:;
- (void)autoAcceptShareIfNecessary;
- (void)updateShareWithCPLShare:inPhotoLibrary:;
- (BOOL)isCurrentUserOwner;
- (void)_updateShareStatusWithCurrentUser:;
+ (id)entityName;
+ (id)createOwnedShareWithUUID:creationDate:title:inPhotoLibrary:;
+ (id)scopeIdentifierPrefix;
+ (id)cloudUUIDKeyForDeletion;
+ (long long)cloudDeletionTypeForTombstone:;
+ (BOOL)supportsCPLScopeType:;
+ (BOOL)shouldAllowFetchURLWithScopeChange:photoLibrary:error:;
+ (id)insertOrUpdateShareWithCPLScopeChange:inPhotoLibrary:;
+ (id)predicateToExcludeExpiredShares;
+ (id)predicateToExcludeTrashedShares;
+ (id)shareWithScopeIdentifier:includeTrashed:inManagedObjectContext:;
+ (id)shareWithShareURL:includeTrashed:inManagedObjectContext:;
+ (id)shareWithUUID:includeTrashed:inManagedObjectContext:;
+ (id)sharesWithPredicate:fetchLimit:inManagedObjectContext:;
+ (id)insertInPhotoLibrary:;
+ (id)_registeredSubclasses;
+ (void)_abortIfCalledOnBaseClass;
+ (BOOL)_shouldRecordCloudDeletionForShare:;
+ (id)shareWithScopedIdentifier:includeTrashed:inManagedObjectContext:;
+ (id)shareWithScopeIdentifiers:includeTrashed:inManagedObjectContext:;
+ (id)_basePredicateIncludeTrashedShares:;
+ (void)fetchShareFromShareURL:inPhotoLibrary:completionHandler:;
+ (BOOL)incrementallyDeleteAndSaveShares:logMessagePrefix:error:;
+ (void)deleteAllSharesInManagedObjectContext:;
+ (void)deleteExpiredSharesInManagedObjectContext:;
+ (void)deleteOldTrashedSharesInManagedObjectContext:;
+ (BOOL)validateCPLScopeChange:;
+ (long long)_cloudDeletionTypeForScopeType:;
+ (long long)_cloudDeletionTypeForStatus:;
@end

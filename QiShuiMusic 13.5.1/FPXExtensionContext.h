@interface FPXExtensionContext : NSExtensionContext
@property (nonatomic) NSString providerIdentifier;
@property (nonatomic) BOOL usesFPFS;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (BOOL)usesFPFS;
- (void)_setTransaction:;
- (void)dumpInternalStateToTermDumper:domainIdentifier:completionHandler:;
- (id)providerIdentifier;
- (void)_indexOutOfBandUpdatedItems:deletedItems:completionHandler:;
- (void)fetchOperationServiceEndpoint:;
- (void)fetchItemID:reply:;
- (void)dealloc;
- (id)instanceWithPrivateSelector:;
- (void)sendBlockedProcessNamesUpdate;
- (void)beginRequestWithDomain:alternateContentsDictionary:domainServicer:providerDomain:domainVersion:completionHandler:;
- (void)spotlightIndexerDidReindexAllSearchableItems:;
- (void)_persistedDocumentURLForURL:itemID:extension:creatingPlaceholderIfMissing:completionHandler:;
- (void)removeListenerDelegate:;
- (void)providePlaceholderAtURL:completionHandler:;
- (id)instanceForURL:;
- (id)additionalServiceSourcesForItemID:domain:extension:;
- (id)v2Instance;
- (id)alternateContentsURLWrapperForItemID:;
- (id)performActionWithIdentifier:onItemsWithIdentifiers:domainIdentifier:completionHandler:;
- (void)evictItemAtURL:completionHandler:;
- (id)fetchContentsForItemWithID:version:usingExistingContentsAtURL:existingVersion:request:completionHandler:;
- (id)initWithInputItems:listenerEndpoint:contextUUID:;
- (void)wakeForSessionIdentifier:completionHandler:;
- (void)observeValueForKeyPath:ofObject:change:context:;
- (id)instanceForDomainIdentifier:;
- (void)identifierForItemAtURL:completionHandler:;
- (id)instanceForItemID:;
- (void)dropIndexForDomain:completionHandler:;
- (void)updateIgnoreStateOfItemWithIdentifiers:ignoreState:completionHandler:;
- (void)fetchTrashIdentifiersWithCompletionHandler:;
- (void)itemChangedAtURL:completionHandler:;
- (id)fetchContentsForItemWithID:version:request:extent:alignment:options:shouldForwardVersion:completionHandler:;
- (void)waitForStabilizationWithCompletionHandler:;
- (id)fetchPublishingURLForItemID:completionHandler:;
- (void)indexOneBatchInDomain:completionHandler:;
- (id)_proxyWithCancellationHandler:forClientOperation:;
- (id)disconnectDomainID:options:completionHandler:;
- (void)itemForURL:completionHandler:;
- (void)wakeForPushWithCompletionHandler:;
- (void)fetchServicesForItemID:allowRestrictedSources:completionHandler:;
- (void)_waitForExtensionStabilizationWithCompletionHandler:;
- (void)dropDomainWithCompletionHandler:;
- (void)valuesForAttributes:forItemID:completionHandler:;
- (void)userCheckedSuppressionCheckboxForUserInteractionIdentifier:domainIdentifier:completionHandler:;
- (void)URLForItemID:creatingPlaceholderIfMissing:ignoreAlternateContentsURL:completionHandler:;
- (void)applyFieldChangesToItem:baseVersion:changedFields:contents:lastKnownVendorItem:extensionInstance:completionHandler:;
- (void)signalEnumeratorForMaterializedItemsWithCompletionHandler:;
- (id)instanceForItemIDs:;
- (void)_singleItemChange:changedFields:bounce:bounceIndex:request:completionHandler:;
- (id)domainContextForURL:;
- (id)createItemBasedOnTemplate:fields:contents:options:request:bounce:completionHandler:;
- (void)_fetchHierarchyForItemID:into:maxDepth:completionHandler:;
- (void)_test_callFileProviderManagerAPIs:;
- (void)singleItemChange:changedFields:bounce:completionHandler:;
- (BOOL)_inlineSymlinkTarget:url:error:;
- (void)didChangeItemID:completionHandler:;
- (void)startProvidingItemAtURL:readingOptions:completionHandler:;
- (id)modifyItem:baseVersion:changedFields:contents:options:request:completionHandler:;
- (void)dumpIndexStateForDomain:toFileHandler:completionHandler:;
- (void)userInteractionErrorsForPerformingAction:sourceItems:destinationItem:fpProviderDomainId:sourceItemKeysAllowList:destinationItemKeysAllowList:completionHandler:;
- (id)_createItemBasedOnTemplate:fields:contents:options:request:bounce:bounceCollidingItem:bounceNumber:completionHandler:;
- (id)createUserInteractionSuppressingWithDomainIdentifier:withPurpose:;
- (void)itemForItemID:request:completionHandler:;
- (void)importDidFinishWithCompletionHandler:;
- (id)domainContextForIdentifier:;
- (void).cxx_destruct;
- (void)_setupItemForTrashing:usesFPFS:completionHandler:;
- (void)preflightTrashItemIDs:completionHandler:;
- (void)fetchDefaultContainerForBundleIdentifier:defaultName:inDomainIdentifier:reply:;
- (void)movingItemAtURL:requiresProvidingWithDestinationURL:completionHandler:;
- (void)deleteSearchableItemsWithSpotlightDomainIdentifiers:domainIdentifier:completionHandler:;
- (void)deleteItemsWithIDs:baseVersions:options:reply:;
- (void)fetchAndStartEnumeratingWithSettings:observer:request:completionHandler:;
- (id)description;
- (void)fetchHierarchyForItemID:recursively:reply:;
- (void)startOperation:toFetchThumbnailsForItemIdentifiers:size:completionHandler:;
- (void)fpx_invalidate;
- (void)_freeSlotHeldByItem:request:bounceIndex:completionHandler:;
- (id)deleteItemWithID:baseVersion:options:request:completionHandler:;
- (void)enumeratorWasInvalidated:;
- (void)removeTrashedItemsOlderThanDate:domainIdentifier:completionHandler:;
- (void)addListenerDelegate:;
- (void)trashItemAtURL:completionHandler:;
- (void)fetchVendorEndpoint:;
- (void)_deleteIndexInDomainContexts:completionHandler:;
- (id)domainContextForItemID:;
- (void)bulkEvictItemsWithItemIDs:completionHandler:;
- (void)attemptRecoveryFromError:optionIndex:completionHandler:;
- (void)setAlternateContentsURL:forDocumentWithItemID:completionHandler:;
- (id)domainContextForItemIDs:;
- (void)preflightReparentItemIDs:underParentID:reply:;
- (void)fetchCustomPushTopicsWithCompletionHandler:;
- (void)bulkItemChanges:changedFields:completionHandler:;
- (void)applyItemChange:baseVersion:contents:completionHandler:;
- (void)signalEnumeratorForPendingItemsWithCompletionHandler:;
- (void)didUpdateAlternateContentsDocumentForDocumentWithItemID:completionHandler:;
- (void)importDocumentAtURL:intoFolderWithIdentifier:originalName:extensionInstance:reply:;
+ (id)_extensionAuxiliaryHostProtocol;
+ (void)setPrincipalClass:;
+ (Class)principalClass;
+ (id)_extensionAuxiliaryVendorProtocol;
@end

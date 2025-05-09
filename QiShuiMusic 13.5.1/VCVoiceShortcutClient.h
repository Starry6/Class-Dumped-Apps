@interface VCVoiceShortcutClient : NSObject
@property (nonatomic) NSObject<OS_dispatch_queue> internalStateQueue;
@property (nonatomic) NSHashTable errorHandlers;
@property (nonatomic) @? creationBlock;
@property (nonatomic) @? interfaceSetupBlock;
@property (nonatomic) NSObject<OS_dispatch_queue> xpcQueue;
@property (nonatomic) NSXPCConnection xpcConnection;
@property (nonatomic) WFSystemSurfaceWorkflowStatusRegistry systemSurfaceStatus;
@property (nonatomic) WFVoiceShortcutCache voiceShortcutCache;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)getVoiceShortcutsForAppWithBundleIdentifier:completion:;
- (id)initWithListenerEndpoint:;
- (id)observableStingWorkflowWithIdentifier:error:;
- (void)addDefaultShortcutsIfNecessaryWithCompletion:;
- (id)accessibilityWatchWorkflowsWithError:;
- (void)getOnScreenContentWithOptions:completionHandler:;
- (id)unarchiveActionFromData:withActionMetadata:error:;
- (void)dealloc;
- (id)accessibilityWorkflowsWithError:;
- (void)importSharedShortcutFromURL:completion:;
- (id)menuBarWorkflowsWithGlyphSize:error:;
- (void)checkTriggerStateWithKeyPath:completion:;
- (id)xpcQueue;
- (void)getShortcutSuggestionsForAppWithBundleIdentifier:completion:;
- (id)drawGlyphs:atSize:withBackgroundColorValues:error:;
- (void)getAllSleepWorkflowsWithCompletion:;
- (void)getSiriPodcastsDatabaseURLWithCompletion:;
- (void)importSharedShortcutFromURL:withName:shortcutSource:completion:;
- (void)createVoiceShortcut:phrase:completion:;
- (id)contextualActionsForContext:error:;
- (void)setInteger:forKey:inDomain:completionHandler:;
- (void)getSleepActionSuggestionsForAppWithBundleIdentifier:shouldFilterBySleep:completion:;
- (id)resolveBookmarkData:updatedData:error:;
- (id)voiceShortcutCache;
- (id)initWithXPCConnectionCreationBlock:XPCInterfaceSetupBlock:;
- (void)resumeWorkflowFromContext:presentationMode:completion:;
- (void)getVoiceShortcutsWithCompletion:;
- (void)getVoiceShortcutWithPhrase:completion:;
- (id)runningWorkflowNamesAndProgressCompletedWithError:;
- (void)setXpcConnection:;
- (id)errorHandlers;
- (id)asynchronousRemoteDataStoreWithErrorHandler:;
- (void)getSleepActionSuggestionsForAllAppsFilteringBySleep:completion:;
- (void)setPerWorkflowStateData:forSmartPromptWithActionUUID:reference:completion:;
- (void)sendAceCommandDictionary:completion:;
- (id)systemSurfaceStatus;
- (void)showSingleStepCompletionForWebClip:completion:;
- (BOOL)requestDataMigration:;
- (id)interfaceSetupBlock;
- (void)getConfiguredTriggerDescriptionsWithCompletion:;
- (id)creationBlock;
- (void)deleteSleepWorkflowWithIdentifier:completion:;
- (void)unarchiveActionFromData:withActionMetadata:completion:;
- (void)resetDefaultShortcutFlagsWithCompletion:;
- (void)fireTriggerWithIdentifier:force:completion:;
- (void)setSpotlightAutoShortcutsEnablement:forBundleIdentifier:completion:;
- (id)drawGlyphs:atSize:withBackgroundColorValues:padding:error:;
- (id)filteredContextualActions:forContext:byType:error:;
- (id)resolveFilePath:workflowID:error:;
- (id)observableStingWorkflowsWithError:;
- (void)archiveAction:withActionMetadata:completion:;
- (id)initWithMachServiceName:options:interfaceSetupBlock:;
- (void)getWidgetWorkflowsInCollectionWithIdentifier:limit:completion:;
- (id)foldersWithError:;
- (id)fetchURLForFPItem:error:;
- (void)refreshTriggerWithIdentifier:completion:;
- (id)shareSheetWorkflowsForExtensionMatchingDictionaries:resolvedActivityItems:hostBundleIdentifier:iconSize:iconScale:error:;
- (void)getValueForDescriptor:resultClass:completion:;
- (void)setSiriAutoShortcutsEnablement:forBundleIdentifier:completion:;
- (id)xpcConnection;
- (id)stingWorkflowsWithError:;
- (void)createSleepWorkflow:completion:;
- (id)archiveAction:withActionMetadata:error:;
- (void)deleteVoiceShortcutWithName:completion:;
- (void)getNumberOfVoiceShortcutsWithCompletion:;
- (id)internalStateQueue;
- (id)accessibilityWorkflowForIdentifier:error:;
- (id)shortcutsInCollectionWithIdentifier:error:;
- (void).cxx_destruct;
- (void)deleteTriggerWithIdentifier:completion:;
- (id)createBookmarkWithURL:workflowID:error:;
- (id)visibleShortcutsWithError:;
- (void)getShortcutSuggestionsForAllAppsWithLimit:completion:;
- (id)getValueForDescriptor:resultClass:error:;
- (void)callErrorHandlerIfNeeded:withError:;
- (void)logRunOfContextualAction:;
- (void)getSpotlightAutoShortcutsEnablementForBundleIdentifier:phraseSignature:completion:;
- (id)runWorkflowWithDescriptor:request:completion:;
- (void)getSleepActionSuggestionsForAppWithBundleIdentifier:options:completion:;
- (void)generateSingleUseTokenForWorkflowIdentifier:completion:;
- (void)getSiriAutoShortcutsEnablementForBundleIdentifier:completion:;
- (id)unsafePopConnectionErrorHandlers;
- (id)resolveCrossDeviceItemID:error:;
- (BOOL)resetAutomationConfirmationStatusWithError:;
- (void)unregisterTriggerWithIdentifier:triggerBacking:completion:;
- (void)getContextualActionsForContext:completion:;
- (id)initWithXPCConnection:XPCConnectionCreationBlock:XPCInterfaceSetupBlock:;
- (void)logUndoOfContextualAction:;
- (void)getSleepWorkflowsWithCompletion:;
- (void)obliterateShortcuts:;
- (void)importShortcutWithRecordData:name:shortcutSource:completion:;
- (BOOL)userHasAutomationsWithError:;
- (void)handleXPCConnectionInvalidation;
- (void)unsafeSetupXPCConnection;
- (id)shortcutWithIdentifier:error:;
- (void)filterContextualActions:forContext:byType:completion:;
- (void)getResultsForQuery:resultClass:completion:;
- (id)synchronousRemoteDataStoreWithErrorHandler:;
- (id)getResultsForQuery:resultClass:resultState:error:;
- (id)asynchronousRemoteDataStoreWithErrorHandler:synchronous:;
- (void)stopRunningWorkflowWithRunningContext:;
- (id)firstUnsortedWorkflowWithBackgroundColorValue:error:;
- (void)unsubscribeFromVoiceShortcutDataUpdateNotifications;
- (void)deleteVoiceShortcutWithIdentifier:completion:;
- (id)createBookmarkWithBookmarkableString:path:workflowID:error:;
- (void)importTopLevelShortcutFromURL:withName:completion:;
- (void)getVoiceShortcutWithIdentifier:completion:;
- (void)getSleepActionSuggestionsForAllAppsWithOptions:completion:;
- (id)stingWorkflowWithIdentifier:error:;
- (void)checkTriggerStateWithIdentifier:completion:;
- (id)accessibilityWorkflowsForSurface:error:;
- (void)getSpotlightAutoShortcutsEnablementForBundleIdentifier:completion:;
- (id)accessibilityWorkflowWithIdentifier:error:;
- (id)shortcutWithIdentifier:glyphSize:error:;
- (void)subscribeToVoiceShortcutDataUpdateNotifications;
- (void)handleXPCConnectionInterruption;
- (void)updateVoiceShortcutWithIdentifier:phrase:shortcut:completion:;
- (void)setShortcutSuggestions:forAppWithBundleIdentifier:;
- (void)resumeWorkflowFromContext:withRequest:completion:;
- (void)getOnScreenContentWithOptions:completion:;
- (void)computeRepresentativeSizesForFinderResizingImages:toSizes:completion:;
- (void)setSpotlightAutoShortcutsEnablement:forBundleIdentifier:phraseSignature:completion:;
- (void)getWidgetWorkflowWithIdentifier:completion:;
+ (id)standardClient;
@end

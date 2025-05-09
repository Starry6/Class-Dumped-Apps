@interface NSUserActivity : NSObject
@property (nonatomic) CIBarcodeDescriptor detectedBarcodeDescriptor;
@property (nonatomic) NSString cacheIdentifier;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
@property (nonatomic) INInteraction interaction;
@property (nonatomic) NSString suggestedInvocationPhrase;
@property (nonatomic) Q shortcutAvailability;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
@property (nonatomic) NSString targetContentIdentifier;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
@property (nonatomic) NSArray writableTypeIdentifiersForItemProvider;
@property (nonatomic) NSString _sourceApplication;
@property (nonatomic) BSProcessHandle _originatingProcess;
@property (nonatomic) BOOL isClassKitDeepLink;
@property (nonatomic) NSArray contextIdentifierPath;
@property (nonatomic) NSString tu_dynamicIdentifier;
@property (nonatomic) MKMapItem mapItem;
@property (nonatomic) NSString externalMediaContentIdentifier;
@property (nonatomic) _SFNavigationIntent _sf_windowCreationNavigationIntent;
@property (nonatomic) NSUUID _sf_windowCreationTabUUID;
@property (nonatomic) NSUUID _sf_windowCreationTabGroupUUID;
@property (nonatomic) NSUUID _sf_windowCreationSourceBrowserControllerUUID;
@property (nonatomic) NSUUID _sf_windowCreationRecentlyClosedTabUUID;
@property (nonatomic) NSNumber _sf_windowCreationMode;
@property (nonatomic) NSURL _canonicalURL;
@property (nonatomic) NSURL canonicalURL;
@property (nonatomic) NSDictionary _linkContextInfo;
@property (nonatomic) NSDictionary linkContextInfo;
@property (nonatomic) NSData _linkContextPreviewMetadata;
@property (nonatomic) CSSearchableItemAttributeSet contentAttributeSet;
@property (nonatomic) NSUUID _originalUniqueIdentifier;
@property (nonatomic) NSDate _madeCurrentDate;
@property (nonatomic) NSDate _madeCurrentEndDate;
@property (nonatomic) double _madeCurrentInterval;
@property (nonatomic) NSDate _madeInitiallyCurrentDate;
@property (nonatomic) NSDate _sentToIndexerDate;
@property (nonatomic) Q _userInfoChangeCount;
@property (nonatomic) BOOL _universalLink;
@property (nonatomic) NSString _subtitle;
@property (nonatomic) NSSet _minimalRequiredUserInfoKeys;
@property (nonatomic) NSString _contentType;
@property (nonatomic) NSString _contentUserAction;
@property (nonatomic) NSDictionary _contentAttributes;
@property (nonatomic) NSSet _keywords;
@property (nonatomic) NSString _contentIdentifier;
@property (nonatomic) NSDate _expirationDate;
@property (nonatomic) BOOL _eligibleForUserActivityHandoff;
@property (nonatomic) BOOL _eligibleForUserActivityIndexing;
@property (nonatomic) BOOL _eligibleForUserActivityReminders;
@property (nonatomic) BOOL _eligibleForUserActivityPublicIndexing;
@property (nonatomic) NSString _teamIdentifier;
@property (nonatomic) NSUUID _uniqueIdentifier;
@property (nonatomic) q _suggestedActionType;
@property (nonatomic) NSDate _lastActivityDate;
@property (nonatomic) NSDictionary _options;
@property (nonatomic) NSDictionary _frameworkPayload;
@property (nonatomic) <NSUserActivityDelegate> _frameworkDelegate;
@property (nonatomic) UAUserActivity _internalUserActivity;
@property (nonatomic) UAUserActivity _internalUserActivity;
@property (nonatomic) NSString activityType;
@property (nonatomic) NSString title;
@property (nonatomic) NSDictionary userInfo;
@property (nonatomic) NSSet requiredUserInfoKeys;
@property (nonatomic) BOOL needsSave;
@property (nonatomic) NSURL webpageURL;
@property (nonatomic) NSURL referrerURL;
@property (nonatomic) NSDate expirationDate;
@property (nonatomic) NSSet keywords;
@property (nonatomic) BOOL supportsContinuationStreams;
@property (nonatomic) <NSUserActivityDelegate> delegate;
@property (nonatomic) NSString targetContentIdentifier;
@property (nonatomic) BOOL eligibleForHandoff;
@property (nonatomic) BOOL eligibleForSearch;
@property (nonatomic) BOOL eligibleForPublicIndexing;
@property (nonatomic) BOOL eligibleForPrediction;
@property (nonatomic) NSString persistentIdentifier;
- (id)detectedBarcodeDescriptor;
- (void)setDetectedCode:;
- (id)suggestedInvocationPhrase;
- (unsigned long long)shortcutAvailability;
- (id)interaction;
- (void)setSuggestedInvocationPhrase:;
- (id)cacheIdentifier;
- (void)setInteraction:;
- (id)_intents_encodeWithJSONEncoder:codableDescription:;
- (long long)_executionContext;
- (BOOL)_hasInteraction;
- (BOOL)_accessedInteraction;
- (void)generateCachePayloadWithCompletion:;
- (id)_initWithIntent:;
- (void)_setInteraction:donate:;
- (void)_setAccessedInteraction:;
- (void)setShortcutAvailability:;
- (id)_intentsIdentifier;
- (void)_intentsPrepareForEncoding;
- (void)_setEligibleForPrediction:;
- (BOOL)_isEligibleForPrediction;
- (void)_setExecutionContext:;
- (id)_intents_copy;
- (id)inInteraction;
- (void)setInInteraction:;
- (void)setTargetContentIdentifier:;
- (id)loadDataWithTypeIdentifier:forItemProviderCompletionHandler:;
- (id)targetContentIdentifier;
- (id)initWithItemProviderData:typeIdentifier:error:;
- (void)_setSourceApplication:;
- (void)_setOriginatingProcess:;
- (id)_sourceApplication;
- (id)_originatingProcess;
- (BOOL)isClassKitDeepLink;
- (id)contextIdentifierPath;
- (id)dialRequestAttachment;
- (id)joinRequestAttachment;
- (id)tu_dynamicIdentifier;
- (id)mapItem;
- (void)setMapItem:;
- (void)_mapkit_populateFieldsForDonationOfMapItem:;
- (void)_mapkit_clearMapItemDonationFields;
- (id)externalMediaContentIdentifier;
- (void)setExternalMediaContentIdentifier:;
- (id)_externalMediaContentBundleIdentifier;
- (void)_setExternalMediaContentBundleIdentifier:;
- (id)sf_windowCreationNavigationIntentID;
- (id)_sf_windowCreationNavigationIntent;
- (id)_sf_windowCreationTabUUID;
- (id)_sf_windowCreationTabGroupUUID;
- (id)_sf_windowCreationSourceBrowserControllerUUID;
- (id)_sf_windowCreationRecentlyClosedTabUUID;
- (id)_sf_windowCreationMode;
- (void)_sf_invalidateWindowCreationData;
- (id)canonicalURL;
- (void)setCanonicalURL:;
- (id)_canonicalURL;
- (void)setLinkContextInfo:;
- (id)_linkContextInfo;
- (void)set_linkContextInfo:;
- (void)set_linkContextPreviewMetadata:;
- (void)set_canonicalURL:;
- (id)linkContextInfo;
- (id)_linkContextPreviewMetadata;
- (void)setContentAttributeSet:;
- (id)contentAttributeSet;
- (void)set_universalLink:;
- (BOOL)_finishUserInfoUpdate;
- (unsigned long long)_beginUserInfoUpdate:;
- (void)_setPayload:object:identifier:dirty:;
- (id)_payloadForIdentifier:;
- (BOOL)_isUniversalLink;
- (void)_setPayloadIdentifier:object:withBlock:;
- (void)_setPayload:object:identifier:;
- (id)_objectForIdentifier:;
- (id)_sentToIndexerDate;
- (id)_madeCurrentDate;
- (id)_madeCurrentEndDate;
- (id)_madeInitiallyCurrentDate;
- (id)_originalUniqueIdentifier;
- (double)_madeCurrentInterval;
- (unsigned long long)_userInfoChangeCount;
- (void)_updateForwardToCoreSpotlightIndexer:;
- (void)_sendToCoreSpotlightIndexer;
- (id)_payloadUpdateBlockForIdentifier:;
- (void)_setDirty:identifier:;
- (id)_copyWithNewUUID;
- (void)_forceSave;
- (id)_createUserActivityStringsWithSaving:options:string:optionalString:data:error:;
- (id)_createUserActivityDataWithSaving:options:error:;
- (BOOL)_supportsSynchronizeActivityWithTimeout;
- (BOOL)doSaveUserActivityWithTimeout:isCurrent:withCompletionHandler:;
- (BOOL)isEligibleForPrediction;
- (id)keywords;
- (void)setKeywords:;
- (void)setContentType:;
- (void)setContentAttributeSet:;
- (id)activityType;
- (id)contentAttributeSet;
- (id)contentAttributes;
- (id)webpageURL;
- (void)_setOptions:;
- (id)init;
- (id)_options;
- (void)didReceiveInputStream:outputStream:;
- (void)dealloc;
- (void)setReferrerURL:;
- (id)userInfo;
- (void)addUserInfoEntriesFromDictionary:;
- (void)setEligibleForPrediction:;
- (void)setEligibleForSearch:;
- (void)setWebpageURL:;
- (id)contentType;
- (void)setDelegate:;
- (void)setPersistentIdentifier:;
- (void)setEligibleForPublicIndexing:;
- (id)_subtitle;
- (void)setExpirationDate:;
- (id)requiredUserInfoKeys;
- (void)setContentAttributes:;
- (void)_setExpirationDate:;
- (void)setTitle:;
- (id)persistentIdentifier;
- (void)resignCurrent;
- (unsigned long long)hash;
- (void)setTargetContentIdentifier:;
- (id)referrerURL;
- (void)setRequiredUserInfoKeys:;
- (id)initWithActivityType:;
- (id)typeIdentifier;
- (id)expirationDate;
- (id)_uniqueIdentifier;
- (void)_setSubtitle:;
- (void)setContentUserAction:;
- (BOOL)isEligibleForSearch;
- (id)title;
- (id)delegate;
- (void)setUserInfo:;
- (void)getContinuationStreamsWithCompletionHandler:;
- (id)contentUserAction;
- (void).cxx_destruct;
- (BOOL)supportsContinuationStreams;
- (void)setNeedsSave:;
- (BOOL)isEligibleForPublicIndexing;
- (id)initWithTypeIdentifier:;
- (void)setSupportsContinuationStreams:;
- (void)setEligibleForHandoff:;
- (void)becomeCurrent;
- (void)invalidate;
- (BOOL)needsSave;
- (BOOL)isEqual:;
- (id)targetContentIdentifier;
- (void)_resignCurrent;
- (BOOL)isEligibleForHandoff;
- (id)initWithInternalUserActivity:;
- (id)webPageURL;
- (void)setWebPageURL:;
- (id)_internalUserActivity;
- (id)_frameworkDelegate;
- (void)willSynchronizeActivity;
- (void)didSynchronizeActivity;
- (id)_minimalRequiredUserInfoKeys;
- (void)_setMinimalRequiredUserInfoKeys:;
- (id)_contentType;
- (void)_setContentType:;
- (id)_contentUserAction;
- (void)_setContentUserAction:;
- (id)_contentIdentifier;
- (void)_setContentIdentifier:;
- (id)_contentAttributes;
- (void)_setContentAttributes:;
- (id)_expirationDate;
- (id)_keywords;
- (void)_setKeywords:;
- (void)_addKeywordsFromArray:;
- (id)_parentUserActivity;
- (void)_setParentUserActivity:;
- (BOOL)_isEligibleForUserActivityHandoff;
- (void)_setEligibleForUserActivityHandoff:;
- (BOOL)_isEligibleForUserActivityIndexing;
- (void)_setEligibleForUserActivityIndexing:;
- (BOOL)_isEligibleForUserActivityReminders;
- (void)_setEligibleForUserActivityReminders:;
- (BOOL)_isEligibleForUserActivityPublicIndexing;
- (void)_setEligibleForUserActivityPublicIndexing:;
- (id)_initWithUserActivityData:;
- (id)_initWithUserActivityStrings:secondaryString:optionalData:;
- (BOOL)_createUserActivityDataWithOptions:completionHandler:;
- (BOOL)_createUserActivityStringsWithOptions:completionHandler:;
- (void)_prepareUserActivityForLaunchingWithOptions:completionHandler:;
- (id)_teamIdentifier;
- (id)_determineMatchingApplicationBundleIdentifierWithOptions:;
- (id)_determineMatchingApplicationBundleIdentfierWithOptions:;
- (id)_initWithTypeIdentifier:suggestedActionType:options:;
- (id)_initWithUserActivityType:dynamicActivityType:options:;
- (void)_updateUserInfoValue:forKey:;
- (void)_removeUserInfoValueForKey:;
- (id)_frameworkPayload;
- (void)_setFrameworkPayload:;
- (void)_updateFrameworkPayloadValue:forKey:;
- (void)_removeFrameworkPayloadValueForKey:;
- (long long)_suggestedActionType;
- (id)_lastActivityDate;
- (void)_setLastActivityDate:;
- (void)_setFrameworkDelegate:;
+ (id)_intents_decodeWithJSONDecoder:codableDescription:from:;
+ (void)buildFromCachePayload:identifier:completion:;
+ (void)deleteAllInteractions;
+ (void)deleteInteractionsWithIdentifiers:;
+ (void)deleteInteractionsWithGroupIdentifier:;
+ (id)writableTypeIdentifiersForItemProvider;
+ (id)readableTypeIdentifiersForItemProvider;
+ (id)objectWithItemProviderData:typeIdentifier:error:;
+ (id)_cnui_startAudioCallIntentWithHandle:contact:;
+ (id)_cnui_startVideoCallIntentWithHandle:contact:;
+ (id)_cnui_sendMessageIntentWithHandle:contact:;
+ (id)_cnui_userActivityWithActivityType:handle:contact:intentWithPerson:;
+ (id)_cnui_searchMailUserActivityForContact:;
+ (id)makeActivityWithIntent:dialRequestAttachment:;
+ (id)makeActivityWithIntent:joinRequestAttachment:;
+ (BOOL)_isActivityTypeAllowedForDialRequest:;
+ (BOOL)_isActivityTypeAllowedForJoinRequest:;
+ (id)_sf_windowCreationActivityWithNavigationIntent:;
+ (id)_sf_windowCreationActivityWithMode:;
+ (id)_sf_windowCreationActivityWithTabUUID:tabGroupUUID:browserControllerUUID:;
+ (id)_sf_windowCreationActivityWithRecentlyClosedTabUUID:browserControllerUUID:;
+ (id)_sf_windowCreationActivityFromSceneConnectionOptions:;
+ (BOOL)_registerAsProxyForApplication:options:completionBlock:;
+ (BOOL)_currentUserActivityProxiesWithOptions:matching:completionHandler:;
+ (void)deleteAllSavedUserActivitiesWithCompletionHandler:;
+ (void)deleteSavedUserActivitiesWithPersistentIdentifiers:completionHandler:;
+ (void)_fetchUserActivityWithUUID:completionHandler:;
+ (BOOL)_supportsUserActivityAppLinks;
+ (BOOL)_currentUserActivityUUIDWithOptions:completionHandler:;
+ (id)_fetchUserActivityWithUUID:intervalToWaitForDocumentSynchronizationToComplete:completionHandler:;
+ (void)_registerUserActivityType:dynamicActivityType:;
+ (void)_unregisterUserActivityType:dynamicActivityType:;
+ (id)_currentUserActivityUUID;
+ (id)_userFacingErrorForLaunchServicesError:userInfo:;
@end

@interface CoreTelephonyClient : NSObject
@property (nonatomic) {queue={object=^{dispatch_object_s}}} userQueue;
@property (nonatomic) CoreTelephonyClientMux mux;
@property (nonatomic) @ delegate;
- (id)proxyWithErrorHandler:;
- (void)ping:;
- (id)init;
- (void)dealloc;
- (void)setDelegate:;
- (BOOL)supportsCellular;
- (id)createCTAssertionForConnectionType:allocator:proxy:;
- (id)synchronousProxyWithErrorHandler:;
- (void)cacheValue:forSelector:;
- (id)getDescriptorsForDomain:error:;
- (void)getDeviceInfo:;
- (id)delegate;
- (void).cxx_destruct;
- (void)getTetheringStatus:;
- (id)initWithQueue:;
- (id)cachedValueForSelector:;
- (id).cxx_construct;
- (void)purchaseAddOnPlan:completion:;
- (id)getDataStatus:error:;
- (id)private_setPacketContextActiveByServiceType:connectionType:active:;
- (id)private_getConnectionAvailability:connectionType:error:;
- (id)private_getActiveConnections:error:;
- (id)private_getConnectionState:connectionType:error:;
- (id)private_getTrafficDescriptorsInfo:connectionType:error:;
- (id)private_getDataStatus:error:;
- (unsigned int)private_getNATTKeepAliveOverCell:error:;
- (void)getCurrentDataServiceDescriptor:;
- (void)setPacketContextActiveByServiceType:connectionType:active:completion:;
- (id)setPacketContextActiveByServiceType:connectionType:active:;
- (void)setInternetActive:completion:;
- (id)setInternetActive:;
- (void)setTetheringActive:completion:;
- (id)setTetheringActive:;
- (void)resetAPNSettings:;
- (id)resetAPNSettings;
- (void)addLowLatencyFilter:pdp:queueSetId:uplink:completion:;
- (void)getLowLatencyFilters:queueSetId:completion:;
- (void)deleteLowLatencyFilter:pdp:queueSetId:uplink:completion:;
- (void)sendDeadPeerDetection:;
- (id)sendDeadPeerDetection;
- (void)setInternationalDataAccessStatus:completion:;
- (id)setInternationalDataAccessStatus:;
- (void)setInternationalDataAccess:status:completion:;
- (id)setInternationalDataAccessSync:status:;
- (void)getInternationalDataAccessStatus:;
- (BOOL)getInternationalDataAccessStatusSync:;
- (void)getInternationalDataAccess:completion:;
- (BOOL)getInternationalDataAccessSync:error:;
- (void)setSupportDynamicDataSimSwitchOnBBCall:completion:;
- (void)setSupportDynamicDataSimSwitch:completion:;
- (void)setSupportDynamicDataSimSwitch:forIccid:completion:;
- (id)setSupportDynamicDataSimSwitchOnBBCall:;
- (id)setSupportDynamicDataSimSwitch:;
- (void)getSupportDynamicDataSimSwitchOnBBCall:;
- (void)getSupportDynamicDataSimSwitch:;
- (BOOL)getSupportDynamicDataSimSwitchOnBBCallSync:;
- (BOOL)getSupportDynamicDataSimSwitchSync:;
- (id)getPacketContextCount:;
- (void)getConnectionAvailability:connectionType:completion:;
- (id)getConnectionAvailability:connectionType:error:;
- (void)getInternetConnectionAvailability:;
- (id)getInternetConnectionAvailabilitySync:;
- (void)getActiveConnections:completion:;
- (id)getActiveConnections:error:;
- (void)getConnectionState:connectionType:completion:;
- (id)getConnectionState:connectionType:error:;
- (id)getTrafficDescriptorsInfo:connectionType:error:;
- (void)getInternetConnectionState:;
- (id)getInternetConnectionStateSync:;
- (void)getDataStatus:completion:;
- (void)getDataStatusBasic:completion:;
- (id)getDataStatusBasic:error:;
- (void)getInternetDataStatus:;
- (id)getInternetDataStatusSync:;
- (void)getInternetDataStatusBasic:;
- (id)getInternetDataStatusBasicSync:;
- (void)getPublicDataBearer:;
- (int)getPublicDataBearerSync:;
- (void)getPublicNrFrequencyRange:;
- (unsigned int)getPublicNrFrequencyRangeSync:;
- (void)getNATTKeepAliveOverCell:completion:;
- (unsigned int)getNATTKeepAliveOverCell:error:;
- (unsigned int)getNATTKeepAliveOverCell:;
- (unsigned int)getNATTKeepAliveOverCellForPreferredDataContext:;
- (BOOL)isTetheringEditingSupported:error:;
- (void)isTetheringEditingSupported:completion:;
- (void)getAnbrActivationState:completion:;
- (void)queryAnbrBitrate:bitrate:direction:completion:;
- (void)simulateDataStall:pdp:completion:;
- (void)getCurrentDataSubscriptionContext:;
- (id)getCurrentDataSubscriptionContextSync:;
- (id)getCurrentDataServiceDescriptorSync:;
- (void)getPreferredDataSubscriptionContext:;
- (void)getPreferredDataServiceDescriptor:;
- (id)getPreferredDataSubscriptionContextSync:;
- (id)getPreferredDataServiceDescriptorSync:;
- (void)getTetheringStatus:connectionType:;
- (id)getTetheringStatusSync:;
- (id)getTetheringStatusSync:connectionType:;
- (id)enterLoopBackMode;
- (id)createAssertionForConnectionType:allocator:error:onReAssertError:;
- (void)setWiFiCallingSettingPreferences:key:value:completion:;
- (void)getWiFiCallingSettingPreferences:key:completion:;
- (id)getWiFiCallingSettingPreferences:key:error:;
- (id)setWiFiCallingSettingPreferences:key:value:;
- (void)copyEmergencyMode:;
- (id)copyEmergencyModeWithError:;
- (void)getAllEmergencyNumbers:;
- (id)getAllEmergencyNumbersWithError:;
- (void)refreshCellMonitor:completion:;
- (void)copyCellInfo:completion:;
- (void)copyCellId:completion:;
- (id)copyPublicCellId:error:;
- (void)copyLocationAreaCode:completion:;
- (void)isEmergencyNumber:number:completion:;
- (BOOL)isEmergencyNumber:number:error:;
- (void)isEmergencyNumberWithWhitelistIncluded:number:completion:;
- (BOOL)isEmergencyNumberWithWhitelistIncluded:number:error:;
- (void)shouldShowUserWarningWhenDialingCallOnContext:completion:;
- (BOOL)shouldShowUserWarningWhenDialingCallOnContext:error:;
- (id)shouldShowBrandedCallingInfo:;
- (id)setShouldShowBrandedCallingInfo:;
- (void)getCallCapabilities:completion:;
- (id)getCallCapabilities:error:;
- (void)getOperatorMultiPartyCallCountMaximum:completion:;
- (id)getOperatorMultiPartyCallCountMaximum:error:;
- (void)getSmsReadyState:completion:;
- (id)getSmsReadyState:error:;
- (void)getSmscAddress:completion:;
- (id)getSmscAddress:error:;
- (void)getEmergencyTextNumbers:completion:;
- (id)getEmergencyTextNumbers:error:;
- (void)dataUsageForLastPeriods:completion:;
- (void)dataUsageForLastPeriodsOnActivePairedDevice:completion:;
- (id)billingCycleEndDatesForLastPeriods:error:;
- (void)userEnteredMonthlyBudget:completion:;
- (id)userEnteredMonthlyBudget:error:;
- (void)setUserEntered:monthlyBudget:completion:;
- (void)setUserEntered:monthlyBudget:error:;
- (void)clearUserEnteredMonthlyBudget:completion:;
- (void)clearUserEnteredMonthlyBudget:error:;
- (void)userEnteredMonthlyRoamingBudget:completion:;
- (id)userEnteredMonthlyRoamingBudget:error:;
- (void)setUserEntered:monthlyRoamingBudget:completion:;
- (void)setUserEntered:monthlyRoamingBudget:error:;
- (void)clearUserEnteredMonthlyRoamingBudget:completion:;
- (void)clearUserEnteredMonthlyRoamingBudget:error:;
- (void)userEnteredBillingEndDayOfMont:completion:;
- (id)userEnteredBillingEndDayOfMont:error:;
- (void)setUserEnteredBillingEnd:dayOfMonth:completion:;
- (void)setUserEnteredBillingEnd:dayOfMonth:error:;
- (void)clearUserEnteredBillingEndDayOfMonth:completion:;
- (void)clearUserEnteredBillingEndDayOfMonth:error:;
- (BOOL)supportsSelector:withContext:error:;
- (void)copyCarrierBundleValue:key:bundleType:completion:;
- (id)copyCarrierBundleValue:key:bundleType:error:;
- (void)copyCarrierBundleValue:keyHierarchy:bundleType:completion:;
- (id)copyCarrierBundleValue:keyHierarchy:bundleType:error:;
- (void)copyCarrierBundleValues:keys:defaultValues:bundleType:withFallbackBundleCheck:completion:;
- (id)copyCarrierBundleValues:keys:defaultValues:bundleType:withFallbackBundleCheck:error:;
- (void)copyCarrierBundleValues:keyHierarchies:defaultValues:bundleType:withFallbackBundleCheck:completion:;
- (id)copyCarrierBundleValues:keyHierarchies:defaultValues:bundleType:withFallbackBundleCheck:error:;
- (void)copyCarrierBundleValueWithDefault:key:bundleType:completion:;
- (id)copyCarrierBundleValueWithDefault:key:bundleType:error:;
- (void)copyCarrierBundleValueWithDefault:keyHierarchy:bundleType:completion:;
- (id)copyCarrierBundleValueWithDefault:keyHierarchy:bundleType:error:;
- (id)copyCarrierBundleValueWithCountryBundleLookup:keyHierarchy:matchingInfo:error:;
- (id)context:getCarrierBundleValue:error:;
- (void)context:getCarrierBundleValue:completion:;
- (void)copyCarrierBundleLocation:completion:;
- (id)copyCarrierBundleLocation:error:;
- (void)copyCarrierBookmarks:completion:;
- (void)copyCarrierBundleVersion:completion:;
- (id)copyCarrierBundleVersion:error:;
- (void)isAttachApnSettingAllowed:completion:;
- (BOOL)isAttachApnSettingAllowed:error:;
- (id)context:modifyAttachApnSettings:;
- (void)context:modifyAttachApnSettings:completion:;
- (id)context:getAttachApnSettings:;
- (void)copyBundleVersion:bundleType:completion:;
- (id)copyBundleVersion:bundleType:error:;
- (void)copyBundleIdentifier:bundleType:completion:;
- (id)copyBundleIdentifier:bundleType:error:;
- (BOOL)restoreToSystemBundles:;
- (id)getCountryBundleLocationForBundleIdentifier:error:;
- (id)getCountryBundleIdentifierForCountryCode:error:;
- (id)getEnglishCarrierNameFor:error:;
- (void)copyBundleLocation:bundleType:completion:;
- (id)copyBundleLocation:bundleType:error:;
- (void)checkForUpdatedBundlesWithAutoInstall:completion:;
- (id)getCountryBundleLocationForMatchingInfo:error:;
- (void)checkRadioBootHealth:;
- (id)getBasebandRadioFrequencyFrontEndScanData:;
- (void)setVoLTEAudioCodec:codecInfo:completion:;
- (void)getSubscriptionInfo:;
- (id)getActiveContexts:;
- (long long)getDualSimCapability:;
- (void)getDescriptorsForDomain:completion:;
- (void)getEvolvedSubscriptionLabelID:withCallback:;
- (void)copyRegistrationStatus:completion:;
- (void)copyRegistrationDisplayStatus:completion:;
- (void)copyServingPlmn:completion:;
- (void)copyMobileCountryCode:completion:;
- (void)copyLastKnownMobileCountryCode:completion:;
- (void)copyMobileNetworkCode:completion:;
- (void)copyIsInHomeCountry:completion:;
- (void)copyIsDataAttached:completion:;
- (void)copyOperatorName:completion:;
- (void)copyLocalizedOperatorName:completion:;
- (void)copyRadioAccessTechnology:completion:;
- (void)copyWirelessTechnology:completion:;
- (void)copyAbbreviatedOperatorName:completion:;
- (void)getRatSelection:completion:;
- (void)setRatSelection:selection:preferred:completion:;
- (void)copyBandInfo:completion:;
- (void)setBandInfo:bands:completion:;
- (void)getSignalStrengthInfo:completion:;
- (void)getVoiceLinkQualityMetric:completion:;
- (void)getEnhancedVoiceLinkQualityMetric:completion:;
- (void)copyRejectCauseCode:completion:;
- (void)copyRegistrationAgentStatus:completion:;
- (void)getIMSRegistrationStatus:completion:;
- (void)copyRegistrationIMSTransportInfo:completion:;
- (void)setMaxDataRate:rate:completion:;
- (void)getMaxDataRate:completion:;
- (void)getSupportedDataRates:completion:;
- (void)fetchNetworkList:completion:;
- (void)copyNetworkList:completion:;
- (void)automaticallySelectNetwork:completion:;
- (void)selectNetwork:network:completion:;
- (void)copyNetworkSelection:completion:;
- (void)isNetworkSelectionMenuAvailable:completion:;
- (void)copyNetworkSelectionMode:completion:;
- (void)copyNetworkSelectionState:completion:;
- (void)copyNetworkSelectionInfo:completion:;
- (void)isNetworkReselectionNeeded:completion:;
- (void)getSignalStrengthMeasurements:completion:;
- (void)getLocalPolicies:completion:;
- (void)getRemotePolicies:completion:;
- (void)setLocalPolicies:completion:;
- (void)setRemotePolicies:completion:;
- (void)removePoliciesFromLocalDevice:completion:;
- (void)performNetworkAccessFlowIfAllowed:ignoreForeground:completion:;
- (void)getSIMStatus:completion:;
- (void)getSIMTrayStatus:;
- (id)isEmbeddedSIMOnlyConfig:;
- (void)copyMobileEquipmentInfo:;
- (void)copyFirmwareUpdateInfo:completion:;
- (void)copySIMIdentity:completion:;
- (void)copyMobileSubscriberIdentity:completion:;
- (void)context:isProtectedIdentitySupported:completion:;
- (void)context:supportedIdentityProtectionFor:completion:;
- (void)context:getPseudoIdentityFor:completion:;
- (void)createEncryptedIdentity:identity:completion:;
- (void)evaluateMobileSubscriberIdentity:identity:completion:;
- (void)copyMobileSubscriberCountryCode:completion:;
- (void)getMobileSubscriberHomeCountryList:completion:;
- (void)copyLastKnownMobileSubscriberCountryCode:completion:;
- (void)copyMobileSubscriberNetworkCode:completion:;
- (void)copyGid1:completion:;
- (void)copyGid2:completion:;
- (void)fetchSIMLockValue:completion:;
- (void)saveSIMLockValue:enabled:pin:completion:;
- (void)unlockPIN:pin:completion:;
- (void)unlockPUK:puk:newPin:completion:;
- (void)promptForSIMUnlock:completion:;
- (void)changePIN:oldPin:newPin:completion:;
- (void)getRemainingPINAttemptCount:completion:;
- (void)getRemainingPUKAttemptCount:completion:;
- (void)getSimLabel:completion:;
- (void)getShortLabel:completion:;
- (void)getSubscriptionUserFacingName:completion:;
- (void)copyLabel:completion:;
- (void)generateAuthenticationInfoUsingSim:authParams:completion:;
- (void)setLabel:label:completion:;
- (void)setDefaultVoice:completion:;
- (void)setActiveUserDataSelection:completion:;
- (void)SIMUnlockProcedureDidComplete;
- (void)authenticate:request:completion:;
- (id)getUserDefaultVoiceSubscriptionContext:;
- (id)getStewieSupport:;
- (void)requestStewieWithContext:completion:;
- (void)exitStewieWithContext:completion:;
- (void)getConnectionAssistantConfig:;
- (void)getConnectionAssistantState:;
- (void)getConnectionAssistantServicePlot:;
- (void)setStewieBlocked:completion:;
- (void)reportStewieDeviceOrientation:completion:;
- (void)compressWithStewieCodec:completion:;
- (void)activateStewieEmergencyTryOutWithCompletion:;
- (void)reportStewieConnectionAssistantEvent:completion:;
- (void)testStewieCommand:completion:;
- (void)getVoicemailInfo:completion:;
- (void)copyPriVersion:completion:;
- (id)getActivationPolicyState:;
- (id)isFactoryDebugEnabled:;
- (void)setUIConfiguredApns:apns:completion:;
- (void)getUIConfiguredApns:completion:;
- (void)resetUIConfiguredApns:completion:;
- (void)getConfiguredApns:completion:;
- (void)deletePersonalWallet:completion:;
- (id)listPersonalWallets:;
- (void)isPNRSupported:completion:;
- (void)issuePNRRequest:pnrReqType:completion:;
- (void)getPNRContext:completion:;
- (void)context:getPhoneNumberSignatureWithCompletion:;
- (id)getTransportKeysToUpdate:;
- (id)getQoSLinkCharacteristics:;
- (void)fetchCallWaitingValue:callClass:completion:;
- (void)saveCallWaitingValue:callClass:enabled:completion:;
- (void)fetchCallForwardingValue:reason:callClass:completion:;
- (void)saveCallForwardingValue:value:completion:;
- (void)isUnconditionalCallForwardingActive:completion:;
- (void)fetchCallBarringValue:facility:callClass:password:completion:;
- (void)saveCallBarringValue:facility:callClass:enabled:password:completion:;
- (void)fetchConnectedLinePresentationValue:completion:;
- (void)fetchCallingLinePresentationValue:completion:;
- (void)fetchConnectedLineIdRestrictionValue:completion:;
- (void)fetchCallingLineIdRestrictionValue:completion:;
- (void)saveCallingLineIdRestrictionValue:restrictionValue:completion:;
- (void)context:canSetCapability:completion:;
- (void)context:getCapability:completion:;
- (id)context:getSystemCapabilities:;
- (id)getPhoneServicesDeviceList:;
- (id)getPhoneServicesDeviceInfo:;
- (void)context:addPhoneServicesDevice:withCompletion:;
- (void)context:removePhoneServicesDevice:withCompletion:;
- (BOOL)context:isMandatoryDisabledVoLTE:;
- (void)selectPhonebook:forPhonebookName:withPassword:completion:;
- (void)savePhonebookEntry:atIndex:withContactName:contactNumber:completion:;
- (void)fetchPhonebook:completion:;
- (void)getPhonebookEntryWithCompletion:atIndex:completion:;
- (void)getPhonebookEntryCountWithCompletion:completion:;
- (void)getPhoneNumberWithCompletion:completion:;
- (void)addPlanWith:appName:appType:completionHandler:;
- (void)addPlanWith:completionHandler:;
- (void)getCameraScanInfoForCardData:completionHandler:;
- (void)getTransferPlanListWithCompletion:;
- (void)getTransferPlansWithCompletion:;
- (void)transferPlan:fromDevice:completionHandler:;
- (void)transferCellularPlan:fromDevice:completionHandler:;
- (void)transferPlans:fromDevice:completionHandler:;
- (void)transferCellularPlans:fromDevice:completionHandler:;
- (void)cancelCellularPlanTransfer:fromDevice:keepCache:completionHandler:;
- (void)convertPhysicalToeSIMWithCompletionHandler:;
- (void)getPlanTransferCredentials:completion:;
- (void)getTransferType:remoteEid:completion:;
- (void)deleteTransferPlansForImei:completion:;
- (void)deleteZone:completion:;
- (void)plansPendingInstallWithCompletion:;
- (void)installPendingPlan:completion:;
- (void)installPendingPlanList:completion:;
- (void)getRemoteDevices:;
- (void)submitSimSetupUsage:completion:;
- (void)getCarrierSetupWithCompletion:;
- (void)websheetInfoForPlan:inBuddy:completion:;
- (void)encryptDataForPlan:data:completion:;
- (void)encryptDataWithCarrierIdentifiers:mnc:gid1:gid2:data:completion:;
- (void)disableRejectedIccid:;
- (void)submitCarrierSetupUserCancelEvent:;
- (void)registerSetUpeSIMLaunchedEvent:;
- (void)setUpeSIMLaunched:;
- (void)bootstrapPlanTransferForEndpoint:usingMessageSession:completion:;
- (void)isAnyPlanOfTransferCapability:availableForThisDeviceWithCompletion:;
- (void)transferRemotePlan:fromDevice:completion:;
- (void)hideTransferPlan:fromDevice:completion:;
- (void)hideTransferCellularPlan:fromDevice:completion:;
- (void)unhideTransferPlan:completion:;
- (void)hiddenTransferPlans:;
- (void)remotePlanSignupInfoFor:userConsent:completion:;
- (void)getRemotePlanManageAccountInfoFor:completion:;
- (void)getProximityTransportSession:remoteDeviceInfo:completion:;
- (void)activateProximityTransfer:completion:;
- (void)invalidateProximityTransfer:force:completion:;
- (void)validateProximityTransfer:pin:completion:;
- (void)resetProximityTransportExtension:;
- (void)getSweetgumCapabilities:completion:;
- (void)getSweetgumUserConsentInfo:completion:;
- (void)setSweetgumUserConsent:userConsent:completion:;
- (void)getSweetgumUsage:completion:;
- (void)refreshSweetgumUsage:completion:;
- (void)getSweetgumPlans:completion:;
- (void)refreshSweetgumPlans:completion:;
- (void)getSweetgumApps:completion:;
- (void)refreshSweetgumApps:completion:;
- (void)refreshSweetgumAll:completion:;
- (void)getSweetgumDataPlanMetrics:completion:;
- (void)purchaseSweetgumPlan:completion:;
- (void)isVinylTestModeEnabledWithCompletion:;
- (void)setVinylTestMode:completion:;
- (void)setEosStatus:assertionState:completion:;
- (void)getEosStatus:;
- (void)setPrefForKey:heirarchy:value:storage:completion:;
- (void)getPrefForKey:heirarchy:storage:completion:;
- (void)terminateProcess:;
- (void)getRadioPersonality:completion:;
- (void)isPrivateNetworkSIM:completion:;
- (void)isPrivateNetworkPreferredOverWifi:completion:;
- (BOOL)supportsEmbeddedSIM;
- (id)getSIMToolkitMenu:menu:;
- (id)selectSIMToolkitMenuItem:index:;
- (id)getSIMToolkitListItems:items:;
- (id)selectSIMToolkitListItem:session:response:index:;
- (id)sendSIMToolkitResponse:session:response:;
- (id)sendSIMToolkitStringResponse:session:response:string:;
- (id)sendSIMToolkitBooleanResponse:session:response:yesNo:;
- (id)sendSIMToolkitUserActivity:;
- (id)sendSIMToolkitDisplayReady:;
- (id)getSIMToolkitUSSDString:ussdString:needRsp:;
- (id)sendSIMToolkitUSSDResponse:response:;
- (id)cancelSIMToolkitUSSDSession:;
- (id)getSIMStatus:error:;
- (id)getSIMTrayStatusOrError:;
- (id)getMobileEquipmentInfo:;
- (id)getMobileEquipmentInfoFor:error:;
- (id)getTypeAllocationCode:error:;
- (id)copySIMIdentity:error:;
- (id)copyMobileSubscriberIdentity:error:;
- (BOOL)context:isProtectedIdentitySupported:error:;
- (long long)context:supportedIdentityProtectionFor:error:;
- (id)context:getPseudoIdentityFor:error:;
- (id)context:getEncryptedIdentity:error:;
- (id)context:evaluateMobileSubscriberIdentity:;
- (id)copyMobileSubscriberCountryCode:error:;
- (id)copyMobileSubscriberIsoCountryCode:error:;
- (id)copyMobileSubscriberIsoSubregionCode:MNC:error:;
- (id)getSimHardwareInfo:error:;
- (long long)isEsimFor:error:;
- (id)getMobileSubscriberHomeCountryList:error:;
- (id)copyLastKnownMobileSubscriberCountryCode:error:;
- (id)copyMobileSubscriberNetworkCode:error:;
- (id)copyGid1:error:;
- (id)copyGid2:error:;
- (id)shouldAllowSimLockFor:;
- (id)fetchSIMLockValue:error:;
- (void)saveSIMLockValue:enabled:pin:error:;
- (void)unlockPIN:pin:error:;
- (void)unlockPUK:puk:newPin:error:;
- (void)changePIN:oldPin:newPin:error:;
- (id)getRemainingPINAttemptCount:error:;
- (id)getRemainingPUKAttemptCount:error:;
- (id)getSimLabel:error:;
- (id)getShortLabel:error:;
- (id)getSubscriptionUserFacingName:error:;
- (id)copyLabel:error:;
- (void)setLabel:label:error:;
- (void)setDefaultVoice:error:;
- (void)setActiveUserDataSelection:error:;
- (id)getUserAuthToken:error:;
- (void)refreshUserAuthToken:error:;
- (id)getLastKnownSimDeactivationInfoFor:error:;
- (id)copyMobileSubscriberIso3CountryCode:MNC:error:;
- (id)checkEmbeddedSimHealthWithError:;
- (id)copyMccOrPlmnsListForIso3CountryCode:error:;
- (BOOL)isPrivateNetworkSIM:error:;
- (BOOL)updateGeofenceProfile:;
- (BOOL)removeGeofenceProfile;
- (id)getRemoteDevicesOfType:error:;
- (id)getRemoteDevicesForTransferOrError:;
- (id)getRemoteDeviceOfType:withEID:error:;
- (id)getRemoteDeviceForTransferWithEID:error:;
- (void)getTransportKeysToUpdateWithCompletion:;
- (id)setTransportKeysUpdated:with:;
- (id)forceRollAllTransportKeys;
- (BOOL)hasDedicatedBearerSupport;
- (id)addDedicatedBearer:error:;
- (id)removeDedicatedBearer:;
- (id)removeAllDedicatedBearers;
- (BOOL)isDedicatedBearerPresent:error:;
- (id)getListOfPresentDedicatedBearers;
- (id)requestQoSLinkCharacteristics;
- (BOOL)isPNRSupported:outError:;
- (id)getPNRContext:outError:;
- (BOOL)isPhoneNumberCredentialValid:outError:;
- (id)context:getPhoneNumberSignature:;
- (id)context:canSetCapability:allowed:with:;
- (id)context:getCapability:status:with:;
- (void)context:setCapability:enabled:with:completion:;
- (id)context:setCapability:enabled:with:;
- (void)context:getSystemCapabilitiesWithCompletion:;
- (id)getSupports5G:error:;
- (id)context:recheckPhoneServicesAccountStatus:;
- (void)getPhoneServicesDeviceListWithCompletion:;
- (void)getPhoneServicesDeviceInfoWithCompletion:;
- (id)context:addPhoneServicesDevice:;
- (id)context:removePhoneServicesDevice:;
- (id)wifiCallingCTFollowUpComplete:;
- (id)context:mandatoryDisableVoLTE:;
- (id)initWithQueue:multiplexer:;
- (id)getSubscriptionInfoWithError:;
- (id)getReleaseCandidateFlag;
- (id)getAllowDevSignedCarrierBundlesFlag;
- (void)getActiveContextsWithCallback:;
- (id)getEvolvedSubscriptionLabelID:error:;
- (BOOL)supportsRequestWithSelector:;
- (void)dispatchBlockToClientAsync:;
- (void)registerBlockForInvalidationNotification:callback:;
- (id)userQueue;
- (void)setUserQueue:;
- (id)mux;
- (void)setMux:;
- (id)copyRegistrationStatus:error:;
- (id)copyRegistrationDisplayStatus:error:;
- (id)copyServingPlmn:error:;
- (id)copyMobileCountryCode:error:;
- (id)copyLastKnownMobileCountryCode:error:;
- (id)copyMobileNetworkCode:error:;
- (id)copyIsInHomeCountry:error:;
- (id)getOperatorName:error:;
- (id)getLocalizedOperatorName:error:;
- (id)getNRDisableStatus:error:;
- (id)getSupports5GStandalone:error:;
- (id)setSupports5GStandalone:enabled:;
- (id)copyRadioAccessTechnology:error:;
- (id)getRatSelectionMask:error:;
- (id)setRatSelectionMask:selection:preferred:;
- (id)getBandInfo:error:;
- (void)setActiveBandInfo:bands:error:;
- (id)getSignalStrengthInfo:error:;
- (id)getRejectCauseCode:error:;
- (id)getIMSRegistrationStatus:error:;
- (id)setMaxDataRate:rate:;
- (long long)getMaxDataRate:error:;
- (id)getSupportedDataRates:error:;
- (id)isNetworkSelectionMenuAvailable:error:;
- (id)copyNetworkSelectionInfo:error:;
- (id)getEncryptionStatus:error:;
- (id)getSignalStrengthMeasurements:error:;
- (id)getDataMode:error:;
- (id)getPublicSignalStrength:error:;
- (id)getCurrentRat:error:;
- (id)getLocalPolicies:error:;
- (id)setLocalPolicies:;
- (id)getUIConfiguredApns:error:;
- (id)getConfiguredApns:error:;
- (unsigned long long)getGSMAUIControlSetting:error:;
- (id)loadGSMASettings:state:;
- (id)deletePersonalWallet:;
- (id)renamePersonalWallet:to:;
- (id)transferPersonalWallet:to:;
- (void)getStewieSupportWithCompletion:;
- (id)getConnectionAssistantConfigWithError:;
- (id)getConnectionAssistantStateWithError:;
- (id)getConnectionAssistantServicePlotWithError:;
- (id)setStewieBlocked:;
- (id)reportStewieDeviceOrientation:;
- (id)reportStewieConnectionAssistantEvent:;
- (BOOL)isAnyPlanTransferableFromThisDeviceOrError:;
- (id)bootstrapPlanTransferForEndpoint:;
- (id)bootstrapPlanTransferForEndpoint:usingMessageSession:;
- (id)endPlanTransferForEndPoint:;
- (id)setPrefForKey:heirarchy:value:storage:;
- (id)getPrefForKey:heirarchy:storage:error:;
- (id)terminateProcess;
- (id)getRadioPersonality:error:;
- (id)isVinylTapeSupportedWithError:;
- (id)fetchCallWaitingValue:callClass:;
- (id)fetchCallForwardingValue:reason:callClass:;
- (id)fetchCallBarringValue:facility:callClass:password:;
- (id)fetchConnectedLinePresentationValue:;
- (id)fetchCallingLinePresentationValue:;
- (id)fetchConnectedLineIdRestrictionValue:;
- (id)fetchCallingLineIdRestrictionValue:;
- (id)saveCallWaitingValue:callClass:enabled:;
- (id)saveCallForwardingValue:value:;
- (id)saveCallBarringValue:facility:callClass:enabled:password:;
- (id)saveCallingLineIdRestrictionValue:restrictionValue:;
- (id)setVisualVoicemailState:subscribed:;
- (id)reliableNetworkFallback:error:;
- (id)setReliableNetworkFallback:enable:;
- (BOOL)saveDataMode:error:;
- (BOOL)lowDataMode:error:;
- (id)setSaveDataMode:enable:;
- (id)setLowDataMode:enable:;
- (BOOL)isSmartDataModeSupported:;
- (BOOL)smartDataMode:error:;
- (id)setSmartDataMode:enable:;
- (BOOL)isHighDataModeSupported:error:;
- (BOOL)interfaceCostExpensive:error:;
- (id)setInterfaceCost:expensive:;
- (BOOL)overriddenInterfaceCostInexpensive:;
- (id)setOverriddenInterfaceCostInexpensive:;
- (id)setPrivacyProxyState:enabled:;
- (id)getPrivacyProxyState:error:;
- (id)getPhonebookEntry:atIndex:error:;
- (int)getPhonebookEntryCount:error:;
- (id)getPhoneNumber:error:;
- (id)fetchBasebandTicket:withError:;
- (id)supportsHydraWithError:;
- (id)usingBootstrapDataService:;
- (void)addPlanWith:request:appName:completionHandler:;
- (BOOL)supportsPlanProvisioning:carrierDescriptors:smdpUrl:iccidPrefix:;
- (void)cancelCellularPlanTransfer:fromDevice:completionHandler:;
- (id)updateSecureIntentData:;
- (id)needToLaunchSetUpeSIM:;
+ (id)sharedMultiplexer;
@end

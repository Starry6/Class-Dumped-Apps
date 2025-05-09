@interface CTCellularPlanManager : NSObject
- (void)ping;
- (id)remapSimLabel:to:;
- (void)getRoamingSignupOverrideWithCompletion:;
- (void)didDeleteRemotePlanItem:completion:;
- (void)manageAccountForPlan:completion:;
- (id)init;
- (id)didEnablePlanItems:;
- (void)didSelectPlanItem:isEnable:completion:;
- (id)getShortLabelsForLabels:;
- (void)isRemotePlanCapableWithContext:completion:;
- (void)resolveSimLabel:completion:;
- (void)dealloc;
- (void)planItemsWithCompletion:;
- (id)didSelectPlanItem:isEnable:;
- (void)userSignupInitiatedOrFailed;
- (void)didPurchasePlanForCsn:iccid:profileServer:;
- (void)launchSequoia;
- (void)openInternalUrlId:;
- (void)addNewPlanWithUserInWebsheetWithCompletion:;
- (id)getPredefinedLabels;
- (void)activatePlanPendingTransfer:completion:;
- (void)isMultipleDataPlanSupportAvailable:;
- (void)getSkipEligibilityCheck:;
- (void)loadPlansWithUrl:postData:completion:;
- (void)startRemoteProvisioningForCSN:completion:;
- (void)manageAccountForRemotePlan:completion:;
- (void)_connect_sync;
- (void)connectionSettings:;
- (void)getSelectedEnv:;
- (void)triggerAddNewDataPlan:;
- (void)setLatitude:andLongitude:;
- (void)addNewPlanWithCardData:confirmationCode:triggerType:userConsent:completion:;
- (void)shouldShowAddNewRemotePlanWithContext:completion:;
- (id)setLabelForPlan:label:;
- (void)plansForRenewalWithProgress:andCompletion:;
- (void)getRemoteInfo:;
- (void)remotePlanLaunchInfoForEid:completion:;
- (BOOL)getEnableVinylFlowTypeOverride;
- (void)didDeletePlanItem:completion:;
- (void)isAddButtonEnabled:;
- (void)setUserInPurchaseFlow:;
- (void)setMcc:andMnc:;
- (void)finishRemoteProvisioningForCSN:completion:;
- (id)synchronousProxyWithErrorHandler:;
- (void)addNewRemotePlan:withCSN:withContext:userConsent:completion:;
- (void)setSelectedEnv:;
- (void)setESimServerURL:;
- (void)selectRemoteProfile:;
- (void)setUseNewCellularPlanUI:;
- (void)eraseAllPlans:;
- (void)deletePlanPendingTransfer:completion:;
- (void)setRoamingSignupOverride:;
- (void)addNewPlanWithAddress:matchingId:oid:confirmationCode:triggerType:userConsent:completion:;
- (void)didCancelRemotePlan;
- (void)didSelectPlanForDefaultVoice:completion:;
- (void)addNewPlanWithFlowType:completion:;
- (void)eraseAllRemotePlansWithCSN:completion:;
- (void)plansWithProgress:andCompletion:additionalParameters:;
- (void)planLaunchInfoWithCompletion:;
- (void)addNewPlanWithUserInWebsheetWithUserConsent:completion:;
- (void)carrierItemsShouldUpdate:completion:;
- (void)addNewRemotePlanWithAddress:matchingId:oid:confirmationCode:isPairing:withCSN:withContext:userConsent:completion:;
- (void)userDidProvideResponse:confirmationCode:forPlan:isRemote:completion:;
- (void)userDidProvideConsentResponse:forPlan:isRemote:completion:;
- (void)setSkipEligibilityCheck:;
- (void)remapSimLabel:to:completion:;
- (id)getPlansPendingTransferForTestability:;
- (void)_ensureConnected_sync;
- (void)didSelectRemotePlanItem:completion:;
- (void)didSelectPlanForData:completion:;
- (void)getSupportedFlowTypes:;
- (void)getDeviceInfo:;
- (id)didSelectPlanForData:;
- (void)remotePlanItemsWithCompletion:;
- (id)didSelectPlanForDefaultVoice:;
- (void)finishProvisioningWithCompletion:;
- (void)enterSimSetupWithCompletion:;
- (void)getESimServerURL:;
- (void)addNewRemotePlanWithCardData:confirmationCode:isPairing:withCSN:withContext:userConsent:completion:;
- (void)_plansForRenewal:progress:completion:additionalParameters:;
- (void)enableVinylFlowTypeOverride:;
- (void)deleteRemoteProfile:;
- (void)setAutoPlanSelection:;
- (void)plansWithProgress:andCompletion:;
- (unsigned long long)getSupportedFlowTypes;
- (void)getSelectedProxy:;
- (void)getIMEIPrefix:;
- (void)installPendingRemotePlan:completion:;
- (void)pendingReleaseRemotePlan;
- (void)subscriptionDetailsForCompletion:;
- (void)carrierHandoffToken:;
- (void)deleteAllRemoteProfiles;
- (void)launchDataActivationNextWithUrl:;
- (void)latitudeLongitudeOverride:;
- (void)showUiIgnoringActivationFlags:;
- (void)mccMncOverride:;
- (void)danglingPlanItemsShouldUpdate:completion:;
- (void)planItemsShouldUpdate:completion:;
- (void)didPurchasePlanWithIccid:downloadProfile:;
- (void)shouldShowPlanSetup:;
- (void)addNewPlanWithCarrierItem:triggerType:userConsent:completion:;
- (void)startProvisioningWithCompletion:;
- (void)setIMEIPrefix:;
- (BOOL)shouldShowPlanList;
- (void)isNewDataPlanCapable:;
- (void)getAutoPlanSelectionWithCompletion:;
- (void)willDisplayPlanItems;
- (void)setSelectedProxy:;
- (void)didSelectPlansForIMessage:completion:;
- (id)danglingPlanItemsShouldUpdate:;
- (id)cancelPlanActivation:;
- (void)eraseAllRemotePlansWithCompletion:;
- (void)expirePlan;
- (void)resumePlanProvisioning:userConsent:completion:;
- (void)getPhoneAuthTokenWithMessage:completion:;
- (id)getSubscriptionContextUUIDforPlan:;
- (id)resolveSimLabel:;
- (void)didPurchasePlanForCsn:iccid:profileServer:state:;
- (void)addNewAddonPlanDuringBuddy:userConsent:completion:;
- (void)didTransferPlanForCsn:iccid:srcIccid:profileServer:state:;
- (void)remotePlanItemsWithUpdateFetch:withCSN:completion:;
- (void)fetchRemoteProfiles:;
- (void)didPurchasePlanForCarrier:mnc:gid1:gid2:state:;
- (void)_reconnect;
- (id)planItemsShouldUpdate:;
- (void)didTransferPlanForCsn:iccid:profileServer:state:;
- (id)getPlansPendingTransfer:;
- (void)shouldShowPlanList:;
- (void)didPurchaseRemotePlanForEid:imei:meid:iccid:alternateSmdpFqdn:completion:;
- (BOOL)isAddButtonEnabled;
- (void)exitSimSetupWithCompletion:;
+ (id)sharedManager;
+ (long long)calculateInstallConsentTextTypeFor:;
@end

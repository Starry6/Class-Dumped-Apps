@interface CKBehaviorOptions : NSObject
@property (nonatomic) BOOL didReadAutomatedDeviceGroup;
@property (nonatomic) NSString automatedDeviceGroup;
- (void)setProductName:;
- (unsigned long long)maxBatchSize;
- (id)productName;
- (void)setBuildVersion:;
- (id)buildVersion;
- (void)setLogTraffic:;
- (BOOL)rollRecordPCSMasterKeys;
- (void)setProductVersion:;
- (void)setMaximumMergeableDeltaRequestSize:;
- (id)productVersion;
- (unsigned long long)maximumMergeableDeltaRequestSize;
- (void)setFakeManateeEnabled:;
- (void)setDeviceCountOverride:;
- (double)packageGCPeriod;
- (id)automatedDeviceGroup;
- (void)dealloc;
- (BOOL)pipelineFetchAllChangesRequests;
- (id)transcoderServiceName;
- (void)setCompressRequests:;
- (unsigned long long)maxPackageUploadsPerBatchWithDefaultValue:;
- (double)shareAcceptorRetrievingDialogMinPeriod;
- (void)setTranscoderServiceName:;
- (void)setCKCtlPrompt:;
- (void)setShareURLToAccountIDSystemAcceptationOverrides:;
- (int)xpcConnectionTimeoutSecondsWithDefaultValue:;
- (BOOL)disableCaching;
- (void)setSetupBaseURL:;
- (void)setTrafficLogMaximumDataSize:;
- (double)maximumQueuedFetchWaitTime;
- (void)_setPref:forKey:;
- (void)setAllowKeyRollingInAllContainers:;
- (void)setTranscoderPermittedRemoteMeasurement:;
- (id)altDSIDsToManateeAvailabilitiesOverrides;
- (id)customCloudDBBaseURL;
- (void)setUsePreauth:;
- (BOOL)CFNetworkLogging;
- (id)configBaseURL;
- (void)observeValueForKeyPath:ofObject:change:context:;
- (double)recordCacheExpireDelay;
- (BOOL)allowExpiredDNSBehavior;
- (BOOL)usePreauth;
- (BOOL)didReadAutomatedDeviceGroup;
- (BOOL)enableMMCSMetricsWithDefaultValue:;
- (void)setRollRecordMasterKeysOnUnshare:;
- (BOOL)shouldProfileSQL;
- (id)_getDictionaryOptionForKey:defaultValue:;
- (double)shareAcceptorRetrievingDialogDelay;
- (unsigned long long)recordCacheEntryCountLimit;
- (int)backgroundSessionConnectionPoolLimitWithDefaultValue:;
- (void)setFakeManateeOverride:;
- (void)setRecordNamesForFakingDecryptionFailure:;
- (void)setOptimisticPCS:;
- (void)setShouldProfileSQL:;
- (void)setCustomDeviceServiceBaseURL:;
- (double)PCSCacheValidTime;
- (unsigned long long)assetEvictionGracePeriodOnHighWatermarkWithDefaultValue:;
- (id)recordNamesForFakingDecryptionFailure;
- (void)setCustomCloudDBBaseURL:;
- (BOOL)useEnhancedPCSEncryptionContext;
- (long long)releaseType;
- (BOOL)rollRecordMasterKeysOnUnshare;
- (BOOL)fakeManateeOverride;
- (void)setCachedRecordExpiryTime:;
- (BOOL)fakeManateeEnabled;
- (void)setConfigBaseURL:;
- (void)setRollZonePCSIdentities:;
- (unsigned long long)savedErrorCount;
- (BOOL)compressRequests;
- (double)minTTRPromptInterval;
- (double)sqlBatchTime;
- (id)deviceCountOverride;
- (void)setUseEncryption:;
- (void)setDidReadAutomatedDeviceGroup:;
- (void)setCustomShareServiceBaseURL:;
- (void)setAltDSIDsToManateeAvailabilitiesOverrides:;
- (void)setTestRunIDHeader:;
- (void)setSqlBatchCount:;
- (void)setIsCurrentAppleAccountSuspended:;
- (void)setSqlBatchTime:;
- (BOOL)shouldDecryptRecordsBeforeSave;
- (BOOL)isDeveloperInstall;
- (void)setCFNetworkLogging:;
- (int)clientThrottleQueueWidth;
- (BOOL)useModTimeInAssetCacheEviction;
- (void).cxx_destruct;
- (void)setRollZoneSharingKeys:;
- (unsigned long long)assetEvictionGracePeriodWithDefaultValue:;
- (BOOL)useEncryption;
- (id)shareURLToAccountIDSystemAcceptationOverrides;
- (void)setPCSCacheValidTime:;
- (double)PCSCacheMinTime;
- (void)setUseStingray:;
- (id)transcoderPermittedRemoteMeasurement;
- (void)setSharingOptionsSummaryString:;
- (void)setRollRecordPCSMasterKeys:;
- (id)sharingOptionsSummaryString;
- (void)setContainerIdentifierToEmailOverrides:;
- (id)testRunIDHeader;
- (long long)maxRecordPCSMasterKeyRolls;
- (id)_init;
- (id)containerIdentifierToForceFatalManateeZoneDecryptionFailure;
- (id)transcoderFunctionName;
- (void)setCustomMetricsServiceBaseURL:;
- (id)CKCtlPrompt;
- (BOOL)isCurrentAppleAccountSuspended;
- (BOOL)sendDebugHeader;
- (unsigned long long)PCSCacheSize;
- (BOOL)sandboxCloudD;
- (BOOL)rollZonePCSIdentities;
- (id)containerIdentifierToEmailOverrides;
- (void)setAutomatedDeviceGroup:;
- (id)vettedEmailsTestFormat;
- (BOOL)allowKeyRollingInAllContainers;
- (void)resetMaximumMergeableDeltaRequestSize;
- (void)_setArrayPref:forKey:;
- (double)maximumThrottleSeconds;
- (void)setModTimeInAssetCacheEviction:;
- (void)setOperationTimeout:;
- (double)publicIdentitiesExpirationTimeout;
- (id)setupBaseURL;
- (void)setContainerIdentifierToForceFatalManateeZoneDecryptionFailure:;
- (unsigned long long)recordCacheSizeLimit;
- (void)setTranscoderFunctionName:;
- (long long)sqlBatchCount;
- (void)setForceUploadRequestActivitiesToRunImmediately:;
- (int)cachedRecordExpiryTime;
- (BOOL)evictRecentAssets;
- (void)setUseEnhancedPCSEncryptionContext:;
- (id)customMetricsServiceBaseURL;
- (BOOL)logTraffic;
- (unsigned long long)maxPackageDownloadsPerBatchWithDefaultValue:;
- (id)customDeviceServiceBaseURL;
- (id)customShareServiceBaseURL;
- (int)defaultRetryAfter;
- (BOOL)rollZoneSharingKeys;
- (int)PCSRetryCount;
- (BOOL)isAppleInternalInstall;
- (void)setSendDebugHeader:;
- (void)setDisableCaching:;
- (id)customCodeServiceBaseURL;
- (int)longlivedOperationMaxRetryCount;
- (void)setCustomCodeServiceBaseURL:;
+ (id)sharedOptions;
@end

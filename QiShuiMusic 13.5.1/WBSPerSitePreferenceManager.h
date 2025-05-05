@interface WBSPerSitePreferenceManager : NSObject
@property (nonatomic) <WBSPerSitePreferenceManagerStorageDelegate> storageDelegate;
@property (nonatomic) <WBSPerSitePreferenceManagerDefaultsDelegate> defaultsDelegate;
@property (nonatomic) <WBSPerSitePreferenceManagerDelegate> delegate;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)preferences;
- (id)valuesForPreference:;
- (void)setDelegate:;
- (void)removePreferenceValuesForDomains:fromPreference:completionHandler:;
- (id)storageDelegate;
- (id)localizedStringForValue:inPreference:;
- (void)setValue:ofPreference:forDomain:completionHandler:;
- (id)delegate;
- (void)setStorageDelegate:;
- (void)getAllDomainsConfiguredForPreference:usingBlock:;
- (void).cxx_destruct;
- (void)getDefaultPreferenceValueForPreference:completionHandler:;
- (void)didUpdatePreference:toValue:forDomain:;
- (void)getValueOfPreference:forDomain:withTimeout:usingBlock:;
- (void)setDefaultsDelegate:;
- (void)setDefaultValue:ofPreference:completionHandler:;
- (void)setDefaultPreferenceValues:completionHandler:;
- (void)_recursivelySetDefaultPreferenceValues:orderedKeys:currentIndex:existingResult:completionHandler:;
- (id)_validatePreferenceValue:inPreference:;
- (id)defaultsDelegate;
@end

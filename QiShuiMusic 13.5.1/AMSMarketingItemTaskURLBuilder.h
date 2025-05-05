@interface AMSMarketingItemTaskURLBuilder : NSObject
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)_additionalQueryItems;
- (id)urlWithServiceType:placement:bag:hydrateRelatedContents:offerHints:additionalParameters:;
- (id)_countryCodeFromBag:;
- (id)_languageTagFromBag:fallback:;
- (id)_realmOverridesFromBag:;
- (id)_stringForKey:fromBag:;
- (id)_urlPathFromBag:;
- (id)_formattedURLPathWithBag:;
+ (id)bagSubProfileVersion;
+ (id)bagSubProfile;
+ (id)bagKeySet;
@end

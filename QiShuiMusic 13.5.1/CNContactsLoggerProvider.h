@interface CNContactsLoggerProvider : NSObject
@property (nonatomic) <CNContactsLogger> contactsLogger;
@property (nonatomic) <CNSpotlightIndexingLogger> spotlightIndexingLogger;
@property (nonatomic) <CNRegulatoryLogger> regulatoryLogger;
@property (nonatomic) <CNFavoritesLogger> favoritesLogger;
@property (nonatomic) <CNGeminiLogger> geminiLogger;
@property (nonatomic) <CNAPITriageLogger> apiTriageLogger;
@property (nonatomic) <CNImageUtilitiesLogger> imageUtilitiesLogger;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)spotlightIndexingLogger;
- (id)geminiLogger;
- (id)regulatoryLogger;
- (void).cxx_destruct;
- (id)imageUtilitiesLogger;
- (id)contactsLogger;
- (id)favoritesLogger;
- (id)apiTriageLogger;
+ (id)defaultProvider;
@end

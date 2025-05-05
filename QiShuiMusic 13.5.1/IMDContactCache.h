@interface IMDContactCache : NSObject
@property (nonatomic) NSCache cache;
@property (nonatomic) NSData currentHistoryToken;
- (id)currentHistoryToken;
- (void)contactStoreDidChange:;
- (id)init;
- (void)setCache:;
- (void).cxx_destruct;
- (id)cache;
- (void)resetCache;
- (void)setCurrentHistoryToken:;
- (void)removeCachedContactForKey:;
- (void)cacheContactsFromFetchResults:forAliases:;
- (void)updateCacheForAliases:;
- (void)cacheContact:forKey:;
- (id)cachedContactForKey:;
- (id)_handlesMatchingContactIdentifier:;
+ (id)sharedInstance;
+ (id)contactsForVCardAtPath:;
+ (id)vCardNameForContact:;
+ (void)updateAttributes:withAddressFromContact:;
+ (id)vCardMapURLForContact:;
+ (void)vCardCoordinateForMapURL:outLatitude:outLongitude:;
@end

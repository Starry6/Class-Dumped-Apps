@interface GEOMapDataSubscriptionLocalPersistence : NSObject
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)init;
- (void).cxx_destruct;
- (id)initWithTileDB:;
- (void)fetchSubscriptionsWithIdentifiers:callbackQueue:completionHandler:;
- (void)addSubscriptionWithIdentifier:auditToken:dataTypes:policy:region:expirationDate:callbackQueue:completionHandler:;
- (void)removeSubscriptionWithIdentifier:callbackQueue:completionHandler:;
@end

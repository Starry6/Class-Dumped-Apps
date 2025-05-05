@interface GEOMapDataSubscriptionRemotePersistence : NSObject
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)fetchSubscriptionsWithIdentifiers:callbackQueue:completionHandler:;
- (void)addSubscriptionWithIdentifier:auditToken:dataTypes:policy:region:expirationDate:callbackQueue:completionHandler:;
- (void)removeSubscriptionWithIdentifier:callbackQueue:completionHandler:;
@end

@interface TUICFInterface : NSObject
+ (id)allowCallForDestinationID:providerIdentifier:;
+ (void)allowCallForDestinationID:providerIdentifier:queue:completionHandler:;
@end

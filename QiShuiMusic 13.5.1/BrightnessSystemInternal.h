@interface BrightnessSystemInternal : NSObject
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)init;
- (void)dealloc;
- (id)newAggregatedPropertyForCombinablePropertiesForKey:;
- (void)destroyServer;
- (void)registerNotificationBlock:;
- (void)undoCombinablePropertiesForClient:;
- (id)copyPropertyForKey:client:;
- (BOOL)isAlsSupported;
- (BOOL)setProperty:forKey:client:;
- (void)setNotificationProperties:forClient:;
- (BOOL)isACombinableProperty:;
- (BOOL)listener:shouldAcceptNewConnection:;
- (void)notifyClientsForProperty:key:;
- (void)registerNotificationBlock:forProperties:;
- (void)setOwnedProperty:forKey:client:;
- (void)undoOwnedPropertiesForClient:;
- (void)clientConnectedWithExpObj:;
- (id)adjustDictionaryToBeValidPropertyList:;
- (void)clientDisconnectedWithExpObj:;
- (BOOL)setCombinableProperty:forKey:client:;
@end

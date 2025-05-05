@interface APRiskConfigServiceDelegate : NSObject
@property (nonatomic) NSDictionary configMap;
@property (nonatomic) NSDictionary oldConfigMap;
@property (nonatomic) NSMutableDictionary listeners;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)addConfigChangeListener:forKey:;
- (id)configMap;
- (id)oldConfigMap;
- (void)refreshConfig:from:;
- (void)setConfigMap:;
- (void)setOldConfigMap:;
- (void)setListeners:;
- (id)init;
- (id)listeners;
- (id)stringValueForKey:;
- (void).cxx_destruct;
@end

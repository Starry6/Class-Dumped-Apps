@interface AWEHPHambListenerNode : NSObject
@property (nonatomic) AWEHPHambCmd harmCmd;
@property (nonatomic) NSMutableDictionary subNodeMap;
@property (nonatomic) NSHashTable listeners;
@property (nonatomic) NSDictionary config;
- (id)subNodeMap;
- (void)setHarmCmd:;
- (id)harmCmd;
- (void)setSubNodeMap:;
- (id)listeners;
- (void)setConfig:;
- (id)init;
- (id)config;
- (void)setListeners:;
- (void).cxx_destruct;
@end

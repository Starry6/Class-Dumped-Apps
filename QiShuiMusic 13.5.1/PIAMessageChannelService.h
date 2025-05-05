@interface PIAMessageChannelService : NSObject
@property (nonatomic) PIABiMapTable messagePortMap;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)getPortEntityWithEngine:;
- (id)initService;
- (id)messagePortMap;
- (void)registerMessagePortEntity:engine:;
- (void)removePortEntityFromEngine:;
- (void)setMessagePortMap:;
- (void).cxx_destruct;
+ (void)executePrepareServiceTask;
@end

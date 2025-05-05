@interface IESLiveBigPartyAudienceSceneConfigProviderRegistryImpl : NSObject
@property (nonatomic) NSMapTable registerTable;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)configProviderForScene:;
- (void)registerForScene:instance:;
- (id)registerTable;
- (void)setRegisterTable:;
- (void).cxx_destruct;
@end

@interface AWEModuleInfo : NSObject
@property (nonatomic) AWERxModule module;
@property (nonatomic) <AWERxStoreProtocol> store;
- (id)store;
- (void)setStore:;
- (void).cxx_destruct;
- (void)setModule:;
- (id)module;
@end

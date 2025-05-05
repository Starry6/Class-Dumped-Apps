@interface CSJRenderEngineProvider : NSObject
@property (nonatomic) CSJRenderEngineConfig config;
- (void)readLocalData;
- (void)setConfig:;
- (id)initWithConfig:;
- (void).cxx_destruct;
- (id)persistenceKey;
- (id)config;
- (void)deleteLocalData;
@end

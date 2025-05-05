@interface DIRSEventConfiguration : NSObject
@property (nonatomic) DIRSConfig base;
@property (nonatomic) @? configureEventInterceptorBlock;
@property (nonatomic) @? configureEventPacketBlock;
@property (nonatomic) @? configureEventUploadFilterOptionsBlock;
@property (nonatomic) Q maxPacketBytes;
@property (nonatomic) Q maxFileBytes;
@property (nonatomic) Q maxPropertyBytes;
- (id)configureEventInterceptorBlock;
- (id)configureEventPacketBlock;
- (id)configureEventUploadFilterOptionsBlock;
- (unsigned long long)maxFileBytes;
- (unsigned long long)maxPacketBytes;
- (unsigned long long)maxPropertyBytes;
- (void)setConfigureEventInterceptorBlock:;
- (void)setConfigureEventPacketBlock:;
- (void)setConfigureEventUploadFilterOptionsBlock:;
- (void)setMaxFileBytes:;
- (void)setMaxPacketBytes:;
- (void)setMaxPropertyBytes:;
- (id)init;
- (void)setBase:;
- (id)base;
- (void).cxx_destruct;
- (id)copyWithZone:;
@end

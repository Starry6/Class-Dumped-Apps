@interface AWEDitoChunkExtension : NSObject
@property (nonatomic) DitoPageContext context;
@property (nonatomic) <DitoExtensionContainerProtocol> container;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)didMergePageModel:update:result:;
- (void)updateChunkFlag:update:result:;
- (void)setContainer:;
- (id)container;
- (void)setContext:;
- (void).cxx_destruct;
- (id)context;
@end

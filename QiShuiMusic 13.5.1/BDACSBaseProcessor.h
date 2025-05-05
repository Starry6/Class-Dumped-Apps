@interface BDACSBaseProcessor : NSObject
@property (nonatomic) NSString webURLString;
@property (nonatomic) BDACSConfigModel config;
@property (nonatomic) BDACSResourceManager resourceManager;
@property (nonatomic) BDAThreadSafeArray fileInfo;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)commonParams;
- (void)dataCollectorDeallocating;
- (void)dataCollectorDidSaveFile:;
- (id)initWithConfig:webURLString:resourceManager:;
- (BOOL)shouldRemoveFileItem:processorType:;
- (BOOL)shouldSaveFileItem:;
- (id)webURLString;
- (id)fileInfo;
- (void).cxx_destruct;
- (id)resourceManager;
- (id)config;
@end

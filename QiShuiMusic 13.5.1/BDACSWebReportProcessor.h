@interface BDACSWebReportProcessor : BDACSBaseProcessor
@property (nonatomic) BDAThreadSafeDictionary filenames;
@property (nonatomic) NSSet contentTypes;
- (void)dataCollectorDeallocating;
- (void)dataCollectorDidSaveFile:;
- (id)generateManifest;
- (id)initWithConfig:webURLString:resourceManager:;
- (BOOL)shouldRemoveFileItem:processorType:;
- (BOOL)shouldSaveFileItem:;
- (id)filenames;
- (id)contentTypes;
- (void).cxx_destruct;
@end

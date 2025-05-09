@interface CSJRenderEngineConfig : NSObject
@property (nonatomic) NSObject<OS_dispatch_queue> ioSerialQueue;
@property (nonatomic) NSObject<OS_dispatch_queue> downloadConcurrentQueue;
@property (nonatomic) NSObject<OS_dispatch_queue> logSerialQueue;
@property (nonatomic) NSMutableDictionary loadingTemplateSuccessBlockDict;
@property (nonatomic) NSLock successBlockLock;
@property (nonatomic) NSLock templateDataLock;
@property (nonatomic) NSMutableDictionary templateDataDictionary;
@property (nonatomic) NSMutableDictionary slotTemplateDataDictionary;
- (id)loadingTemplateSuccessBlockDict;
- (id)downloadConcurrentQueue;
- (id)ioSerialQueue;
- (id)logSerialQueue;
- (void)pbu_addWithURL:successBlock:;
- (void)pbu_executeWithURL:;
- (BOOL)pbu_isDownloadWithURL:;
- (void)pbu_logWithSubType:format:;
- (void)setDownloadConcurrentQueue:;
- (void)setIoSerialQueue:;
- (void)setLoadingTemplateSuccessBlockDict:;
- (void)setLogSerialQueue:;
- (void)setSlotTemplateDataDictionary:;
- (void)setSuccessBlockLock:;
- (void)setTemplateDataDictionary:;
- (void)setTemplateDataLock:;
- (id)slotTemplateDataDictionary;
- (id)successBlockLock;
- (id)templateDataDictionary;
- (id)templateDataLock;
- (id)init;
- (void).cxx_destruct;
@end

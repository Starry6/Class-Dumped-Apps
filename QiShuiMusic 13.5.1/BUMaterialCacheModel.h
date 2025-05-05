@interface BUMaterialCacheModel : NSObject
@property (nonatomic) NSString cacheKey;
@property (nonatomic) @ materialMeta;
@property (nonatomic) NSDictionary materialJson;
@property (nonatomic) double timeStamp;
@property (nonatomic) BOOL isProcessing;
@property (nonatomic) @? handleProcessReslut;
- (id)handleProcessReslut;
- (id)materialJson;
- (id)materialMeta;
- (void)setHandleProcessReslut:;
- (void)setIsProcessing:;
- (void)setMaterialJson:;
- (void)setMaterialMeta:;
- (id)cacheKey;
- (void).cxx_destruct;
- (double)timeStamp;
- (void)setCacheKey:;
- (void)setTimeStamp:;
- (BOOL)isProcessing;
@end

@interface AWESelectTemplateInternalProcessOperation : NSOperation
@property (nonatomic) double startTime;
@property (nonatomic) ACCRecommendTemplateInfo templateInfo;
@property (nonatomic) NSArray assetsArray;
@property (nonatomic) LVTemplateProcessor processor;
@property (nonatomic) LVTemplateDataManager result;
@property (nonatomic) NSError error;
@property (nonatomic) NSDictionary importedAssetsDic;
@property (nonatomic) @? templateCompletion;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)templateInfo;
- (id)initWithTemplateModel:assetsArray:;
- (void)setTemplateCompletion:;
- (void)setAssetsArray:;
- (void)setErrorForCancel;
- (id)assetsArray;
- (void)templateDownloadCallbackWithFilePath:error:templateModel:;
- (void)genFragmentInfoAndReplace;
- (id)importedAssetsDic;
- (id)templateCompletion;
- (void)templateProcessor:didChangeProgress:;
- (void)templateProcessor:didPrepareResource:;
- (void)templateProcessor:didFailWithErrorCode:withSubCode:;
- (void)templateProcessor:didCompleteWithDataManager:;
- (void)setImportedAssetsDic:;
- (BOOL)isAsynchronous;
- (void)setResult:;
- (void)setStartTime:;
- (void)setFinished:;
- (BOOL)isExecuting;
- (void)done;
- (void)setError:;
- (BOOL)isCancelled;
- (void)cancel;
- (BOOL)isFinished;
- (BOOL)isConcurrent;
- (void).cxx_destruct;
- (id)error;
- (double)startTime;
- (void)setExecuting:;
- (void)start;
- (void)setTemplateInfo:;
- (id)result;
- (id)processor;
- (void)setProcessor:;
- (id)templateModel;
@end

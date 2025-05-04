@interface AWETokamakUploadHandler : NSObject
@property (nonatomic) BDObjectUploaderClient clientTop;
@property (nonatomic) @? finishBlock;
@property (nonatomic) Q requestNumber;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)objectUploadDidFinish:;
- (void)objectUpload:fileIndex:progressDidUpdate:;
- (void)objectUpload:onLogInfo:;
- (void)objectUpload:fileIndex:singleObject:error:;
- (long long)objectUploadGetNetState:;
- (void)setClientTop:;
- (void)logUploadInfo:;
- (void)upload:uploadFlag:callback:;
- (void).cxx_destruct;
- (unsigned long long)requestNumber;
- (void)setRequestNumber:;
- (void)setFinishBlock:;
- (id)finishBlock;
- (id)clientTop;
+ (id)shared;
@end

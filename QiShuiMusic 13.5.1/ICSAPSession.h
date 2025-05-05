@interface ICSAPSession : NSObject
@property (nonatomic) NSOperationQueue _prepareFairPlayContextOperationQueue;
@property (nonatomic) ICFPSAPContext _sapContext;
@property (nonatomic) NSURL _certificateURL;
@property (nonatomic) ICStoreRequestContext _requestContext;
@property (nonatomic) NSURL _setupURL;
@property (nonatomic) I sapVersion;
- (id)_requestContext;
- (id)_prepareFairPlayContextOperationQueue;
- (id)_initWithVersion:certificateURL:setupURL:requestContext:;
- (void)verifySignatureData:forData:withCompletionHandler:;
- (id)_setupURL;
- (unsigned int)sapVersion;
- (void)_setSAPContext:;
- (void).cxx_destruct;
- (id)_certificateURL;
- (void)signData:withCompletionHandler:;
- (id)_sapContext;
+ (id)sharedSAPSessionWithVersion:URLBag:requestContext:;
@end

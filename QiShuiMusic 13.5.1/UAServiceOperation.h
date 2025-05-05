@interface UAServiceOperation : NSOperation
@property (nonatomic) NSArray classNames;
@property (nonatomic) NSMutableDictionary operationData;
@property (nonatomic) @? completion;
@property (nonatomic) UATimer timer;
- (id)initWithServiceClassNames:data:;
- (void)finishInMainForResult:;
- (void)setOperationData:;
- (id)completion;
- (void)setCompletion:;
- (void)dealloc;
- (void)setTimer:;
- (void)main;
- (void)cancelOperation;
- (void).cxx_destruct;
- (id)timer;
- (id)classNames;
- (void)setClassNames:;
- (id)operationData;
+ (Class)networkClass;
+ (void)performGetPhoneServiceCompletion:;
+ (void)performLogServiceWithData:completion:;
+ (void)performLoginServiceForType:completion:;
+ (void)performServicesWithNames:completion:;
+ (void)performServicesWithNames:type:completion:;
+ (void)performServicesWithNames:type:data:completion:;
@end

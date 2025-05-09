@interface BDFileUploadiOSDNSLocalParser : NSObject
@property (nonatomic) NSString hostname;
@property (nonatomic) double timeout;
@property (nonatomic) q maxCount;
@property (nonatomic) BOOL isUserCancel;
@property (nonatomic) BOOL isSuccess;
@property (nonatomic) BOOL isCancelled;
@property (nonatomic) @? result;
@property (nonatomic) NSError error;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)_resetInitialStates;
- (BOOL)isUserCancel;
- (void)notifyError:;
- (void)notifySuccess:;
- (void)parseDNS;
- (id)parseResult:;
- (void)setIsUserCancel:;
- (id)hostname;
- (BOOL)isSuccess;
- (id)result;
- (BOOL)cancelled;
- (void)cancel;
- (void)start:;
- (void)dealloc;
- (long long)maxCount;
- (void)setHostname:;
- (BOOL)isCancelled;
- (id)host;
- (void)setMaxCount:;
- (void)setError:;
- (void)setTimeout:;
- (id)error;
- (id)initWithHost:;
- (void)setIsCancelled:;
- (void).cxx_destruct;
- (double)timeout;
- (void)setResult:;
- (void)setIsSuccess:;
- (long long)parserType;
@end

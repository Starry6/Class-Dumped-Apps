@interface CPLProxyLibraryManagerOutstandingInvocation : NSObject
@property (nonatomic) BOOL inMemoryRequest;
@property (nonatomic) BOOL didStart;
@property (nonatomic) float progress;
@property (nonatomic) BOOL didFinish;
@property (nonatomic) NSError finalError;
@property (nonatomic) CPLResource finalResource;
@property (nonatomic) NSData finalData;
- (void)setProgress:;
- (float)progress;
- (void).cxx_destruct;
- (id)description;
- (BOOL)didFinish;
- (void)setDidFinish:;
- (BOOL)didStart;
- (BOOL)isInMemoryRequest;
- (void)setInMemoryRequest:;
- (void)setDidStart:;
- (id)finalError;
- (void)setFinalError:;
- (id)finalResource;
- (void)setFinalResource:;
- (id)finalData;
- (void)setFinalData:;
@end

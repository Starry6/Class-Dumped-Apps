@interface MSVArtworkServiceOperation : NSOperation
@property (nonatomic) MSVArtworkServiceRequest request;
@property (nonatomic) NSError operationError;
@property (nonatomic) NSString debugMessage;
- (id)request;
- (id)operationError;
- (void).cxx_destruct;
- (void)setOperationError:;
- (id)initWithArtworkRequest:;
- (id)debugMessage;
- (void)setDebugMessage:;
@end

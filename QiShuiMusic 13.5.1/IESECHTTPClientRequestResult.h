@interface IESECHTTPClientRequestResult : NSObject
@property (nonatomic) IESECHTTPRequest request;
@property (nonatomic) @ model;
@property (nonatomic) NSError error;
@property (nonatomic) NSError mappingError;
@property (nonatomic) NSString logID;
@property (nonatomic) NSString ttStable;
- (id)mappingError;
- (void)setMappingError:;
- (void)setTtStable:;
- (id)ttStable;
- (id)model;
- (void)setModel:;
- (void)setError:;
- (id)error;
- (id)request;
- (void).cxx_destruct;
- (void)setRequest:;
- (id)logID;
- (void)setLogID:;
@end

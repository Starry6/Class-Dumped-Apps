@interface PLLibraryServicesStateNode : NSObject
@property (nonatomic) NSString logPrefix;
@property (nonatomic) q state;
@property (nonatomic) NSOperationQueue operationQueue;
@property (nonatomic) I qos;
- (void)terminate;
- (unsigned int)qos;
- (void)setQos:;
- (id)initWithLibraryServicesState:qualityOfService:logPrefix:;
- (id)operationQueue;
- (void)run;
- (long long)state;
- (id)logPrefix;
- (void).cxx_destruct;
- (id)description;
@end

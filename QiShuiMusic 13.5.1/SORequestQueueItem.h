@interface SORequestQueueItem : NSObject
@property (nonatomic) <SOServiceProtocol> service;
@property (nonatomic) SOAuthorizationRequestParameters requestParameters;
@property (nonatomic) @? completionBlock;
@property (nonatomic) BOOL isRunning;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)setIsRunning:;
- (BOOL)isRunning;
- (id)service;
- (id)requestParameters;
- (void).cxx_destruct;
- (id)description;
- (id)completionBlock;
- (id)initWithService:requestParameters:completionBlock:;
@end

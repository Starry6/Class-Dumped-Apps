@interface PIANetworkService : NSObject
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)initService;
- (id)taskWithRequest:responseHandler:;
+ (void)executePrepareServiceTask;
@end

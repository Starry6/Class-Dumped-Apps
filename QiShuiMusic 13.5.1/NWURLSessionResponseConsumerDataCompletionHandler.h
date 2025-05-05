@interface NWURLSessionResponseConsumerDataCompletionHandler : NSObject
@property (nonatomic) NSURLResponse response;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)response;
- (void).cxx_destruct;
- (void)task:deliverResponse:completionHandler:;
- (void)task:deliverData:complete:error:completionHandler:;
@end

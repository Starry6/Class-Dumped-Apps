@interface AFSiriTaskDeliveryHandler : NSObject
@property (nonatomic) AFSiriTaskService service;
@property (nonatomic) NSObject<OS_dispatch_queue> queue;
@property (nonatomic) <AFSiriTaskServiceDelegate> delegate;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)setService:;
- (void)setDelegate:;
- (id)service;
- (id)delegate;
- (void).cxx_destruct;
- (void)setQueue:;
- (id)queue;
- (void)deliverSiriTask:completionHandler:;
@end

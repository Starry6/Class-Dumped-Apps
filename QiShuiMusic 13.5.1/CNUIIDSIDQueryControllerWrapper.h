@interface CNUIIDSIDQueryControllerWrapper : NSObject
@property (nonatomic) IDSIDQueryController controller;
- (BOOL)refreshIDStatusForDestinations:service:listenerID:queue:completionBlock:;
- (id)initWithController:;
- (void).cxx_destruct;
- (id)controller;
@end

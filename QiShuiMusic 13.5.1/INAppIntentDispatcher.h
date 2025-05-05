@interface INAppIntentDispatcher : NSObject
@property (nonatomic) <INIntentDeliveringDelegate> delegate;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)setDelegate:;
- (id)delegate;
- (void).cxx_destruct;
- (id)initWithDelegate:;
- (void)dispatchIntentForwardingAction:completionHandler:;
@end

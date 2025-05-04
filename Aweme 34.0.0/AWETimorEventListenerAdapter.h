@interface AWETimorEventListenerAdapter : NSObject
@property (nonatomic) <AWETimorEventListenerDelegate> delegate;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)delegate;
- (id)initWithDelegate:;
- (void).cxx_destruct;
- (void)setDelegate:;
- (void)receiveEvent:data:;
@end

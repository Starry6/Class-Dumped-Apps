@interface AFNotifyObserver : NSObject
@property (nonatomic) NSString name;
@property (nonatomic) Q state;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)dealloc;
- (void)_updateStateWithToken:;
- (void)_invalidate;
- (id)initWithName:options:queue:delegate:;
- (unsigned long long)state;
- (void).cxx_destruct;
- (void)getStateWithCompletion:;
- (id)description;
- (id)name;
- (void)_handleNotificationWithToken:;
- (void)invalidate;
@end

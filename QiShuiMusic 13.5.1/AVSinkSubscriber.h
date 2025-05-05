@interface AVSinkSubscriber : NSObject
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)cancel;
- (void)dealloc;
- (id)description;
- (id)initWithPublisher:requestingInitialValue:sink:;
@end

@interface CTTelephonyNetworkInfoDelegatePlus : NSObject
@property (nonatomic) CTTelephonyNetworkInfo delegate;
@property (nonatomic) {queue={object=^{dispatch_object_s}}} clientQueue;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)dataStatus:dataStatusInfo:;
- (id)clientQueue;
- (void)setClientQueue:;
- (void)dealloc;
- (void)setDelegate:;
- (id)delegate;
- (void).cxx_destruct;
- (id)initWithDelegate:;
- (id).cxx_construct;
@end

@interface AFInstrumentationObserverConnection : NSObject
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void).cxx_destruct;
- (void)flushWithCompletion:;
- (void)invalidate;
- (id)initWithObservation:;
- (id)initWithObservation:filterByInstrumentationTypes:;
- (void)waitUntilInvalidated;
@end

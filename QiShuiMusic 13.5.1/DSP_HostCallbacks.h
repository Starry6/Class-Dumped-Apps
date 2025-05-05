@interface DSP_HostCallbacks : NSObject
@property (nonatomic) {function<void (const DSP_Host_Types::MutationRequestConfiguration &)>={__value_func<void (const DSP_Host_Types::MutationRequestConfiguration &)>={type=[24C]}^v}} mutationRequestListener;
@property (nonatomic) {function<void (const AudioObjectPropertyAddress &)>={__value_func<void (const AudioObjectPropertyAddress &)>={type=[24C]}^v}} propertyChangeListener;
@property (nonatomic) ^{DSP_Host_IOProcessor=^^?} owner;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)setOwner:;
- (id)owner;
- (void).cxx_destruct;
- (id).cxx_construct;
- (void)notifyClientsOfCustomPropertyChange:;
- (void)requestMutation:;
- (id)mutationRequestListener;
- (void)setMutationRequestListener:;
- (id)propertyChangeListener;
- (void)setPropertyChangeListener:;
@end

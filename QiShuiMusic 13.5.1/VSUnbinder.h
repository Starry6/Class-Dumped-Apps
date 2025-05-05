@interface VSUnbinder : NSObject
@property (nonatomic) BOOL invalid;
@property (nonatomic) NSMapTable bindingsByBinder;
- (id)init;
- (void)dealloc;
- (void)setInvalid:;
- (BOOL)isInvalid;
- (void).cxx_destruct;
- (void)binder:didEstablishBinding:;
- (void)binder:didTearDownBinding:;
- (id)bindingsByBinder;
- (void)setBindingsByBinder:;
@end

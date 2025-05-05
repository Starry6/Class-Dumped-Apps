@interface AUAudioUnitBus_XPC : AUAudioUnitBus
- (void)removeObserver:forKeyPath:;
- (void)addObserver:forKeyPath:options:context:;
- (void)dealloc;
- (id)format;
- (id)initWithCoder:;
- (void)encodeWithCoder:;
- (void)removeObserver:forKeyPath:context:;
- (void)setEnabled:;
- (void).cxx_destruct;
- (BOOL)isEnabled;
- (BOOL)setFormat:error:;
- (void)propertyChanged:;
+ (BOOL)automaticallyNotifiesObserversForKey:;
+ (BOOL)supportsSecureCoding;
@end

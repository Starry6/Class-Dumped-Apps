@interface VSBinder : NSObject
@property (nonatomic) @ boundObject;
@property (nonatomic) BOOL establishmentProhibited;
@property (nonatomic) NSCountedSet currentlyChangingBindings;
@property (nonatomic) NSMutableDictionary establishedBindings;
- (id)init;
- (void)dealloc;
- (void)observeValueForKeyPath:ofObject:change:context:;
- (void).cxx_destruct;
- (id)initWithBoundObject:;
- (id)_infoForBinding:;
- (void)establishBinding:withInfo:;
- (void)tearDownBinding:;
- (id)valueForBinding:;
- (void)setValue:forBinding:;
- (id)boundObject;
- (BOOL)isEstablishmentProhibited;
- (void)setEstablishmentProhibited:;
- (id)currentlyChangingBindings;
- (void)setCurrentlyChangingBindings:;
- (id)establishedBindings;
- (void)setEstablishedBindings:;
@end

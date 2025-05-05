@interface NightShiftDisplayWrapper : NSObject
@property (nonatomic) <CBContainerProtocol> container;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)setContainer:;
- (id)init;
- (void)setPreference:forKey:user:;
- (void)dealloc;
- (id)copyPreferenceForKey:user:;
- (id)container;
- (void)setNightShiftFactorDictionary:;
- (id)initWithDisplay:;
@end

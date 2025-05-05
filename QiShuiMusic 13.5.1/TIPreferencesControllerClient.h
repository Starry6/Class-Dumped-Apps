@interface TIPreferencesControllerClient : TIPreferencesController
@property (nonatomic) NSString machName;
@property (nonatomic) BOOL isValid;
- (void)updateInputModes:;
- (void)createConnectionIfNecessary;
- (id)init;
- (void)dealloc;
- (void)setIsValid:;
- (void)_disconnect;
- (id)machName;
- (void)performWithWriteability:operations:;
- (BOOL)isValid;
- (void)_pushValue:toPreference:domain:;
- (void).cxx_destruct;
- (void)setMachName:;
- (void)forwardInvocation:;
+ (id)serviceInterface;
+ (id)sharedPreferencesController;
@end

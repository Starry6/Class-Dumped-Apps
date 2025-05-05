@interface BKSExternalDefaults : BKSAbstractDefaults
@property (nonatomic) BKSLockdownDefaults lockdownDefaults;
@property (nonatomic) BKSIAPDefaults iapDefaults;
@property (nonatomic) BKSPersistentConnectionDefaults persistentConnectionDefaults;
@property (nonatomic) BKSSpringBoardDefaults springBoardDefaults;
@property (nonatomic) BKSKeyboardDefaults keyboardDefaults;
- (void).cxx_destruct;
- (id)lockdownDefaults;
- (id)iapDefaults;
- (id)persistentConnectionDefaults;
- (id)springBoardDefaults;
- (id)keyboardDefaults;
@end

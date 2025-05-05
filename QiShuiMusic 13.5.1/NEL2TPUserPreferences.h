@interface NEL2TPUserPreferences : NSObject
@property (nonatomic) NSString identifier;
@property (nonatomic) NSString name;
@property (nonatomic) NEVPNProtocolL2TP settings;
@property (nonatomic) BOOL current;
@property (nonatomic) BOOL forced;
- (BOOL)checkValidityAndCollectErrors:;
- (void)dealloc;
- (void)setName:;
- (id)settings;
- (BOOL)isCurrent;
- (void)setSettings:;
- (id)identifier;
- (void)setCurrent:;
- (void).cxx_destruct;
- (id)name;
- (id)initWithConfiguration:;
- (BOOL)isForced;
@end

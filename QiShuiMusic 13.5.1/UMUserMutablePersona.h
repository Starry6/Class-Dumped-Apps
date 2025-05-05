@interface UMUserMutablePersona : UMUserPersona
@property (nonatomic) I uid;
@property (nonatomic) I gid;
@property (nonatomic) BOOL isEnterprisePersona;
@property (nonatomic) BOOL isPersonalPersona;
@property (nonatomic) BOOL isSystemPersona;
@property (nonatomic) BOOL isDefaultPersona;
@property (nonatomic) BOOL isGuestPersona;
@property (nonatomic) BOOL isDataSeparatedPersona;
@property (nonatomic) BOOL isDisabled;
@property (nonatomic) NSString userPersonaUniqueString;
@property (nonatomic) NSString userPersonaNickName;
@property (nonatomic) Q userPersonaType;
- (BOOL)commitChangesWithError:;
- (BOOL)commitChanges;
@end

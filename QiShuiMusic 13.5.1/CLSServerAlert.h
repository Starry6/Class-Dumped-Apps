@interface CLSServerAlert : CLSObject
@property (nonatomic) q alertType;
@property (nonatomic) q displayRoles;
@property (nonatomic) NSString title;
@property (nonatomic) NSString message;
@property (nonatomic) NSDictionary defaultButtonInfo;
@property (nonatomic) NSArray otherButtonInfos;
@property (nonatomic) q displayedCount;
- (void)setMessage:;
- (void)setTitle:;
- (id)initWithCoder:;
- (void)encodeWithCoder:;
- (void)setAlertType:;
- (id)title;
- (long long)alertType;
- (id)message;
- (void).cxx_destruct;
- (id)_init;
- (id)dictionaryRepresentation;
- (void)setDisplayedCount:;
- (long long)displayedCount;
- (long long)displayRoles;
- (void)setDisplayRoles:;
- (id)defaultButtonInfo;
- (void)setDefaultButtonInfo:;
- (id)otherButtonInfos;
- (void)setOtherButtonInfos:;
+ (BOOL)supportsSecureCoding;
@end

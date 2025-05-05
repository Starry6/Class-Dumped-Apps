@interface BKSEventFocusDeferralProperties : NSObject
@property (nonatomic) NSString clientID;
@property (nonatomic) NSInteger pid;
@property (nonatomic) NSString displayUUID;
@property (nonatomic) I contextID;
- (void)dealloc;
- (id)conciseDescription;
- (unsigned int)contextID;
- (id)displayUUID;
- (id)initWithCoder:;
- (unsigned long long)hash;
- (void)encodeWithCoder:;
- (int)pid;
- (void).cxx_destruct;
- (id)description;
- (id)clientID;
- (BOOL)isEqual:;
- (void)setPid:;
- (id)initWithClientID:pid:displayUUID:contextID:;
- (BOOL)isEqualNotIncludingClientIDAndPid:;
- (id)propertiesOneLevelMoreGeneric;
+ (BOOL)supportsSecureCoding;
+ (id)propertiesWithMainDisplayAndClientID:pid:contextID:;
+ (id)propertiesWithClientID:pid:displayUUID:contextID:;
@end

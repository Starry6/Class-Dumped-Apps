@interface CKPCSDiagnosticInformation : NSObject
@property (nonatomic) NSString identityInfo;
@property (nonatomic) NSString serviceIdentityInfo;
@property (nonatomic) NSMutableDictionary pcsInfoByZoneID;
@property (nonatomic) NSMutableArray notFoundZoneIDs;
- (id)init;
- (id)initWithCoder:;
- (void)encodeWithCoder:;
- (void).cxx_destruct;
- (id)identityInfo;
- (void)setIdentityInfo:;
- (id)serviceIdentityInfo;
- (void)setServiceIdentityInfo:;
- (id)pcsInfoByZoneID;
- (void)setPcsInfoByZoneID:;
- (id)notFoundZoneIDs;
- (void)setNotFoundZoneIDs:;
+ (BOOL)supportsSecureCoding;
@end

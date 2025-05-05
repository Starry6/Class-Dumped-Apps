@interface TRINamespaceRecord : NSObject
@property (nonatomic) NSString name;
@property (nonatomic) I compatibilityVersion;
@property (nonatomic) NSURL treatmentURL;
- (id)init;
- (id)treatmentURL;
- (unsigned int)compatibilityVersion;
- (id)copyWithReplacementCompatibilityVersion:;
- (id)initWithCoder:;
- (unsigned long long)hash;
- (id)initWithName:compatibilityVersion:treatmentURL:;
- (void)encodeWithCoder:;
- (id)copyWithReplacementTreatmentURL:;
- (BOOL)isEqualToRecord:;
- (void).cxx_destruct;
- (id)description;
- (id)name;
- (id)copyWithReplacementName:;
- (BOOL)isEqual:;
- (id)copyWithZone:;
+ (BOOL)supportsSecureCoding;
+ (id)recordWithName:compatibilityVersion:treatmentURL:;
@end

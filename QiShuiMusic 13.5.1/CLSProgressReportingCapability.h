@interface CLSProgressReportingCapability : CLSObject
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
@property (nonatomic) q kind;
@property (nonatomic) NSString details;
- (void)setDetails:;
- (void)setKind:;
- (long long)kind;
- (id)initWithCoder:;
- (void)encodeWithCoder:;
- (void).cxx_destruct;
- (id)description;
- (id)_init;
- (id)dictionaryRepresentation;
- (id)details;
- (void)mergeWithObject:;
- (BOOL)validateObject:;
- (id)initWithKind:details:;
+ (BOOL)supportsSecureCoding;
+ (id)relations;
@end

@interface CNHandleStringsContactPredicate : CNPredicate
@property (nonatomic) NSArray handleStrings;
@property (nonatomic) NSArray containerIdentifiers;
- (id)init;
- (id)shortDebugDescription;
- (id)initWithCoder:;
- (id)containerIdentifiers;
- (unsigned long long)hash;
- (void)encodeWithCoder:;
- (void).cxx_destruct;
- (id)description;
- (BOOL)isEqual:;
- (id)cn_resultTransformWithMatchInfos:;
- (void)cn_triageWithLog:serialNumber:;
- (id)initWithHandleStrings:;
- (id)initWithHandleStrings:containerIdentifiers:;
- (id)handleStrings;
+ (BOOL)supportsSecureCoding;
@end

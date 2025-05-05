@interface CNPhoneNumberContactPredicate : CNPredicate
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)shortDebugDescription;
- (id)initWithCoder:;
- (unsigned long long)hash;
- (void)encodeWithCoder:;
- (void).cxx_destruct;
- (id)description;
- (BOOL)isEqual:;
- (id)sgContactMatchesWithSortOrder:mutableObjects:service:error:;
- (void)cn_triageWithLog:serialNumber:;
+ (BOOL)supportsSecureCoding;
@end

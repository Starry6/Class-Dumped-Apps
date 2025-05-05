@interface FARecommendedFamilyMember : NSObject
@property (nonatomic) NSString handle;
@property (nonatomic) NSString iMessageHandle;
@property (nonatomic) NSString displayName;
@property (nonatomic) CNContact contact;
- (id)contact;
- (void)setContact:;
- (id)handle;
- (void)setHandle:;
- (id)initWithCoder:;
- (void)setDisplayName:;
- (id)displayName;
- (void)encodeWithCoder:;
- (void).cxx_destruct;
- (BOOL)isEqual:;
- (id)copyWithZone:;
- (id)initWithRecommendation:;
- (id)contactFromRecommendationWithIdentifier:;
- (id)_safeClasses;
- (id)iMessageHandle;
- (void)setIMessageHandle:;
+ (BOOL)supportsSecureCoding;
@end

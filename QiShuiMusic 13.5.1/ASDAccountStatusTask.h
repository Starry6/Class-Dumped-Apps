@interface ASDAccountStatusTask : NSObject
@property (nonatomic) BOOL lookupFamilyInfoIfNecessary;
- (id)init;
- (id)initWithCoder:;
- (void)encodeWithCoder:;
- (void).cxx_destruct;
- (void)statusWithCompletion:;
- (BOOL)lookupFamilyInfoIfNecessary;
- (void)setLookupFamilyInfoIfNecessary:;
+ (BOOL)supportsSecureCoding;
@end

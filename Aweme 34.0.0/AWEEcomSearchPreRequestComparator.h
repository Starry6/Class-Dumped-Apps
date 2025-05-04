@interface AWEEcomSearchPreRequestComparator : NSObject
@property (nonatomic) NSDictionary exemptionRules;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)strictCompareDictionary:withDictionary:;
- (id)exemptionRules;
- (id)initWithExemptionRules:;
- (id)exemptCompareDictionary:withDictionary:;
- (void)setExemptionRules:;
- (void).cxx_destruct;
@end

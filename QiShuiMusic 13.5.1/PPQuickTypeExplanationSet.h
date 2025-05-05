@interface PPQuickTypeExplanationSet : NSObject
- (void)push:;
- (id)init;
- (void)enumerateWithBlock:;
- (id)initWithCoder:;
- (unsigned long long)hash;
- (void)encodeWithCoder:;
- (void).cxx_destruct;
- (id)description;
- (unsigned long long)count;
- (BOOL)isEqualToQuickTypeExplanationSet:;
- (BOOL)isEqual:;
- (id)copyWithZone:;
+ (BOOL)supportsSecureCoding;
+ (id)stringFromExplanation:;
+ (id)uniqueKeycodeFromExplanation:;
@end

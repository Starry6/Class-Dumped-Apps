@interface PFAdjustmentStack : NSObject
- (id)init;
- (unsigned long long)countByEnumeratingWithState:objects:count:;
- (id)debugDescription;
- (void).cxx_destruct;
- (id)description;
- (unsigned long long)count;
- (id)copyWithZone:;
- (id)initWithAdjustments:;
- (id)adjustmentAtIndex:;
- (id)firstAdjustmentWithIdentifier:;
- (id)adjustmentsWithIdentifier:;
- (id)maskUUIDs;
- (id)initWithEnvelopeDictionary:;
- (id)envelopeDictionary;
+ (BOOL)isValidEnvelopeDictionary:errors:;
@end

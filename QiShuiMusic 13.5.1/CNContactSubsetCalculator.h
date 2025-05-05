@interface CNContactSubsetCalculator : NSObject
+ (BOOL)isContact:subsetOfContact:ignoringProperties:;
+ (BOOL)isContact:subsetOfContact:forSingleValueProperty:;
+ (BOOL)isContact:subsetOfContact:forMultiValueProperty:;
+ (BOOL)_isLabeledValue:availableInLabeledValues:claimedIndices:forMultiValueProperty:;
+ (BOOL)_isLabel:subsumableIntoLabel:equivalencies:;
@end

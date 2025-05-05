@interface CNUnifiedContacts : NSObject
+ (unsigned long long)indexOfPreferredContactForImage:;
+ (id)imageValuePropertiesByKey;
+ (id)imageValuePropertyKeys;
+ (id)nonNameSingleValuePropertiesByKey;
+ (id)makeNonNameSingleValuePropertiesByKey;
+ (id)unifyAvailableKeysOfContacts:;
+ (void)unifyNamesOfContacts:withPreferredContact:intoContact:availableKeyDescriptor:;
+ (void)unifyNonNameSingleValuesOfContacts:withPreferredContact:intoContact:availableKeyDescriptor:;
+ (void)unifyImageOfContacts:intoContact:availableKeyDescriptor:;
+ (void)unifySingleValuesProperties:ofContacts:intoContact:availableKeyDescriptor:;
+ (id)firstNonNilValueForProperty:inContacts:;
+ (BOOL)shouldIncludeLabeledValue:fromSource:inDestination:forProperty:;
+ (BOOL)doesMultiValue:needLabeledValue:fromMultiValue:forProperty:;
+ (BOOL)shouldLabeledValue:replaceInferiorValueInMultiValue:forProperty:;
+ (void)addLinkedLabeledValue:toLabeledValue:forProperty:;
+ (id)indexesOfLabeledValuesUnifiableWithLabelValuePair:inMultiValue:forProperty:;
+ (id)indexesOfValuesInferiorTo:inMultiValue:forProperty:;
+ (unsigned long long)indexOfValueMostInferiorTo:inMultiValue:forProperty:;
+ (void)replaceInferiorValueInMultiValue:withEntryAtIndex:fromMultiValue:forProperty:;
+ (unsigned long long)countOfLabelIncludingEquivalents:value:inMultiValue:forProperty:;
+ (unsigned long long)countOfLabelsUnifiableWithLabel:valuesUnifiableWithValue:inMultiValue:forProperty:;
+ (id)unifiedIdentifiersForLabeledValue:inUnifiedMap:forProperty:;
+ (BOOL)canUnifyLabel:withLabel:forProperty:;
+ (id)unifiedIdentifiersForValue:inUnifiedMap:forProperty:;
@end

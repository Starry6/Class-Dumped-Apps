@interface PETEventNumericalProperty : PETEventProperty
- (id)_loggingKeyStringRepresentationForValue:;
- (id)description;
- (unsigned long long)cardinality;
- (id)initWithName:range:clampValues:;
- (unsigned long long)_unsignedIntegerValueForNumericValue:;
- (id)validRange;
- (id)longestValueString;
- (BOOL)isValidValue:;
@end

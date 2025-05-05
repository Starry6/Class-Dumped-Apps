@interface PETEventStringValuedProperty : PETEventProperty
- (id)possibleValues;
- (id)_loggingKeyStringRepresentationForValue:;
- (void).cxx_destruct;
- (id)description;
- (unsigned long long)cardinality;
- (id)initWithName:possibleValues:autoSanitizeValues:;
- (id)longestValueString;
- (BOOL)isValidValue:;
@end

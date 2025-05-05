@interface PETEventFreeValuedProperty : PETEventProperty
- (id)initWithName:;
- (id)possibleValues;
- (id)_loggingKeyStringRepresentationForValue:;
- (id)description;
- (unsigned long long)cardinality;
- (id)longestValueString;
- (BOOL)isValidValue:;
@end

@interface PETEventEnumMappedProperty : PETEventProperty
- (id)possibleValues;
- (id)_loggingKeyStringRepresentationForValue:;
- (void).cxx_destruct;
- (id)description;
- (unsigned long long)cardinality;
- (id)initWithName:enumMapping:autoSanitizeValues:;
- (id)validRange;
- (id)longestValueString;
- (BOOL)isValidValue:;
@end

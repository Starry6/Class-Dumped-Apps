@interface IPAGeometryOperatorSequence : IPAGeometryOperator
- (void).cxx_destruct;
- (id)description;
- (id)initWithIdentifier:;
- (unsigned long long)count;
- (id)transformForGeometry:;
- (BOOL)appendOperator:;
- (BOOL)replaceOperatorWithIdentifier:withOperator:;
- (BOOL)removeOperatorWithIdentifier:;
- (id)subsequenceFrom:to:;
+ (id)sequence;
+ (id)sequenceWithIdentifier:;
@end

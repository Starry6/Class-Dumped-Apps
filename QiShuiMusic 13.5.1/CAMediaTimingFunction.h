@interface CAMediaTimingFunction : NSObject
- (float)_solveForInput:;
- (id)CA_copyRenderValue;
- (void)dealloc;
- (unsigned long long)CA_numericValueCount;
- (unsigned long long)CA_copyNumericValue:;
- (id)initWithCoder:;
- (void)_getPoints:;
- (void)encodeWithCoder:;
- (void)encodeWithCAMLWriter:;
- (id)description;
- (id)initWithControlPoints::::;
- (void)getControlPointAtIndex:values:;
- (id)CAMLType;
+ (id)uiFunctionWithControlPoints:;
+ (id)_kbTimingFunction;
+ (id)sigmoidFunction;
+ (BOOL)supportsSecureCoding;
+ (id)functionWithName:;
+ (void)CAMLParserEndElement:content:;
+ (id)functionWithControlPoints::::;
@end

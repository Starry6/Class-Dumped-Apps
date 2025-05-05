@interface BUDBCoder : NSObject
@property (nonatomic) NSMutableDictionary fields;
- (id)convertInsertSQLWithTableNamed:;
- (id)convertUpdateSQLWithTableNamed:;
- (id)_convertToStringWithValue:andType:;
- (id)decoderDateWithField:;
- (double)decoderFloatWithField:;
- (long long)decoderIntegerWithField:;
- (id)decoderObjectWithField:;
- (id)decoderTextWithField:;
- (void)encoderFloat:withField:;
- (void)encoderInteger:withField:;
- (void)encoderObject:withField:;
- (void)encoderText:withField:;
- (id)initWithDefaultFieldValues;
- (id)init;
- (void)setFields:;
- (id)fields;
- (void).cxx_destruct;
@end

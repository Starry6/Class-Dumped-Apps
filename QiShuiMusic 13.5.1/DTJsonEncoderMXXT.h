@interface DTJsonEncoderMXXT : NSObject
@property (nonatomic) NSMutableString JSONRepresentation;
- (void)encodeObject:ofClass:recusive:;
- (id)jsonValueFrom:;
- (void)setJSONRepresentation:;
- (id)encodeObject:;
- (id)JSONRepresentation;
- (id)init;
- (void).cxx_destruct;
- (void)encodeDictionary:;
- (void)encodeArray:;
+ (id)normalizePropertyName:;
+ (id)encoder;
@end

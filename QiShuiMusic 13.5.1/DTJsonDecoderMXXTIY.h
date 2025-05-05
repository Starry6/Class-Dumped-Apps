@interface DTJsonDecoderMXXTIY : NSObject
- (id)decodeArrayWithElementClass:fromJSONObject:;
- (id)decodeDictionaryWithElementClass:fromJSONObject:;
- (id)decodeObjectOfClass:fromJSONObject:;
- (id)decodeWithClass:elementClass:fromJSONObject:;
- (id)decodeWithClass:elementClass:fromJSONString:;
- (id)decodeWithClassName:elementClass:fromJSONObject:;
- (void)setDateValue:toProperty:ofObject:;
- (void)setNumberValue:toProperty:ofObject:convertSelector:;
- (void)setProperty:ofObject:lookupDictionary:;
- (void)setStringValue:toProperty:ofObject:;
- (void)setupObject:ofClass:lookupDictionary:;
+ (id)decoder;
@end

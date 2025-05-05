@interface BMSiriDictationEvent : NSObject
@property (nonatomic) double absoluteTimestamp;
@property (nonatomic) NSString recognizedText;
@property (nonatomic) NSString correctedText;
@property (nonatomic) I dataVersion;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)initWithProtoData:;
- (id)proto;
- (id)json;
- (id)encodeAsProto;
- (double)absoluteTimestamp;
- (unsigned int)dataVersion;
- (id)initWithProto:;
- (void).cxx_destruct;
- (id)serialize;
- (id)jsonDict;
- (BOOL)isEqual:;
- (id)correctedText;
- (id)recognizedText;
- (id)initWithAbsoluteTimestamp:;
- (id)initWithAbsoluteTimestamp:recognizedText:correctedText:;
+ (id)eventWithData:dataVersion:;
@end

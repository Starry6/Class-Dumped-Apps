@interface OSLogDeserializedMessagePlaceholder : OSLogMessagePlaceholder
@property (nonatomic) NSDictionary backingDict;
@property (nonatomic) _OSLogEventSerializationMetadata metadata;
- (id)backingDict;
- (int)precision;
- (id)rawString;
- (id)metadata;
- (id)initWithDict:metadata:;
- (int)width;
- (id)type;
- (void).cxx_destruct;
- (id)typeNamespace;
- (id)tokens;
@end

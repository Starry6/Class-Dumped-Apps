@interface OSLogDeserializedEventMessageArgument : OSLogEventMessageArgument
@property (nonatomic) NSDictionary backingDict;
@property (nonatomic) _OSLogEventSerializationMetadata metadata;
- (id)backingDict;
- (id)rawBytes;
- (long long)int64Value;
- (double)doubleValue;
- (id)metadata;
- (unsigned long long)scalarCategory;
- (unsigned long long)privacy;
- (unsigned long long)availability;
- (unsigned long long)scalarType;
- (id)initWithDict:metadata:;
- (id)objectRepresentation;
- (unsigned short)rawBytesLength;
- (id)_numValue;
- (void).cxx_destruct;
- (id)longDoubleValue;
- (unsigned long long)unsignedInt64Value;
- (unsigned long long)category;
@end

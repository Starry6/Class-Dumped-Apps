@interface OSLogDecomposedMessageSegment : NSObject
@property (nonatomic) NSDictionary backingDict;
@property (nonatomic) NSString literalPrefix;
@property (nonatomic) OSLogDeserializedMessagePlaceholder placeholder;
@property (nonatomic) OSLogDeserializedEventMessageArgument argument;
- (id)backingDict;
- (id)placeholder;
- (id)initWithDict:metadata:;
- (void).cxx_destruct;
- (id)argument;
- (id)literalPrefix;
@end

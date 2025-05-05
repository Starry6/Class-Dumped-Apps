@interface OSLogDeserializedEventDecomposedMessage : OSLogEventDecomposedMessage
@property (nonatomic) NSArray segments;
@property (nonatomic) NSDictionary backingDict;
- (id)backingDict;
- (id)segments;
- (id)placeholderAtIndex:;
- (id)literalPrefixAtIndex:;
- (unsigned long long)placeholderCount;
- (id)initWithDict:metadata:;
- (id)argumentAtIndex:;
- (unsigned long long)state;
- (void).cxx_destruct;
@end

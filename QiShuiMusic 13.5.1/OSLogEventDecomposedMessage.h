@interface OSLogEventDecomposedMessage : NSObject
@property (nonatomic) OSLogEventProxy proxy;
@property (nonatomic) Q sizeOfLong;
@property (nonatomic) Q placeholderCount;
@property (nonatomic) Q state;
- (void)_populateFields;
- (void)dealloc;
- (id)proxy;
- (id)placeholderAtIndex:;
- (id)literalPrefixAtIndex:;
- (void)_unmake;
- (unsigned long long)placeholderCount;
- (id)_rawPlaceholderForIndex:;
- (id)initWithEventProxy:;
- (id)argumentAtIndex:;
- (unsigned long long)state;
- (void)_initializePlaceholders;
- (unsigned long long)sizeOfLong;
@end

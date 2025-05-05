@interface CAMLWriter : NSObject
@property (nonatomic) NSURL baseURL;
@property (nonatomic) <CAMLWriterDelegate> delegate;
- (void)encodeObject:;
- (void)dealloc;
- (void)setBaseURL:;
- (id)baseURL;
- (void)setDelegate:;
- (id)delegate;
- (id)initWithData:;
- (BOOL)encodingForReverseSerializationTest;
- (void)setEncodingForReverseSerializationTest:;
- (void)encodeObject:conditionally:;
- (void)beginElement:;
- (void)beginPropertyElement:;
- (void)setElementAttribute:forKey:;
- (void)setElementContent:;
- (id)URLStringForResource:;
- (void)endElement;
- (void)_writeElementTree:;
+ (id)writerWithData:;
@end

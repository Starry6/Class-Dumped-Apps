@interface SDPParser : NSObject
@property (nonatomic) NSString fieldName;
@property (nonatomic) NSString fieldValue;
@property (nonatomic) C fieldType;
@property (nonatomic) BOOL parsingDone;
- (void)dealloc;
- (id)initWithString:;
- (id)fieldName;
- (id)fieldValue;
- (unsigned char)fieldType;
- (BOOL)nextLine;
- (int)stringToMediaType:;
- (BOOL)parseMediaLineHeader:mediaType:supportedPayloads:rtpPort:;
- (BOOL)parsingDone;
@end

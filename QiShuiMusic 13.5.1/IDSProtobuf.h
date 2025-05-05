@interface IDSProtobuf : NSObject
@property (nonatomic) NSData data;
@property (nonatomic) NSData uncompressedData;
@property (nonatomic) S type;
@property (nonatomic) BOOL isResponse;
@property (nonatomic) IDSMessageContext context;
- (id)init;
- (void)dealloc;
- (id)context;
- (id)data;
- (id)initWithDictionary:;
- (void)setType:;
- (id)initWithCoder:;
- (void)encodeWithCoder:;
- (unsigned short)type;
- (void).cxx_destruct;
- (id)description;
- (void)setData:;
- (id)dictionaryRepresentation;
- (void)setContext:;
- (BOOL)isResponse;
- (void)setIsResponse:;
- (id)initWithProtobufData:type:isResponse:;
- (id)dictionaryRepresentationWithUncompressedData;
- (id)uncompressedData;
- (void)setUncompressedData:;
+ (id)keyRepresentationForType:isResponse:;
@end

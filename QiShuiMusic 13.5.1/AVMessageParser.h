@interface AVMessageParser : NSObject
@property (nonatomic) NSString lineSeparator;
@property (nonatomic) NSString headerBodySeparator;
@property (nonatomic) NSString bodyLengthKey;
@property (nonatomic) NSString compressionMethodKey;
@property (nonatomic) NSData lineSeparatorData;
@property (nonatomic) NSData headerBodySeparatorData;
- (id)init;
- (void).cxx_destruct;
- (id)initWithLineSeparator:headerBodySeparator:bodyLengthKey:compressionMethodKey:;
- (void)setLineSeparator:;
- (void)setHeaderBodySeparator:;
- (id)partsWithData:;
- (id)lineSeparator;
- (id)headerBodySeparator;
- (id)bodyLengthKey;
- (void)setBodyLengthKey:;
- (id)compressionMethodKey;
- (void)setCompressionMethodKey:;
- (id)lineSeparatorData;
- (void)setLineSeparatorData:;
- (id)headerBodySeparatorData;
- (void)setHeaderBodySeparatorData:;
+ (id)airMessageParser;
@end

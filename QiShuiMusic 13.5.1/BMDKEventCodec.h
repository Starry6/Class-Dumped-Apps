@interface BMDKEventCodec : NSObject
@property (nonatomic) BOOL decodeMetadata;
- (id)init;
- (id)decodeWithProtoData:;
- (id)decodeWithProto:;
- (id)encodeAsProto:;
- (id)encodeAsProtoData:;
- (BOOL)decodeMetadata;
- (void)setDecodeMetadata:;
+ (id)codecWithVersion:;
@end

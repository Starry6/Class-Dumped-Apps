@interface SFDecoder : NSObject
@property (nonatomic) SFCodingOptions options;
- (void)setOptions:;
- (id)initWithOptions:;
- (id)options;
- (void).cxx_destruct;
- (id)decodeValueOfType:fromData:error:;
@end

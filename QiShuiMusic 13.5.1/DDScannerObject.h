@interface DDScannerObject : NSObject
@property (nonatomic) q jobIdentifier;
- (void)cancel;
- (void)dealloc;
- (BOOL)hasBasicType;
- (void)setJobIdentifier:;
- (int)type;
- (id)scanString:range:query:configuration:completionBlock:;
- (void).cxx_destruct;
- (long long)jobIdentifier;
- (id)initWithType:enableParsec:;
@end

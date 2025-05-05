@interface TKTokenKeyExchangeParameters : NSObject
@property (nonatomic) q requestedSize;
@property (nonatomic) NSData sharedInfo;
- (id)initWithParameters:;
- (id)sharedInfo;
- (void).cxx_destruct;
- (long long)requestedSize;
@end

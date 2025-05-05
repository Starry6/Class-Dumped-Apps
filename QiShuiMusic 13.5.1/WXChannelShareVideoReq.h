@interface WXChannelShareVideoReq : BaseReq
@property (nonatomic) NSString localIdentifier;
@property (nonatomic) NSData extData;
@property (nonatomic) WXChannelBaseJumpInfo jumpInfo;
- (id)extData;
- (id)jumpInfo;
- (void)setExtData:;
- (void)setJumpInfo:;
- (id)localIdentifier;
- (void).cxx_destruct;
- (void)setLocalIdentifier:;
+ (id)object;
@end

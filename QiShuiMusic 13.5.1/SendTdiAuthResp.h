@interface SendTdiAuthResp : SendAuthResp
@property (nonatomic) NSString tdiExtInfo;
@property (nonatomic) NSData tdiAuthBuffer;
@property (nonatomic) NSData tdiAuthParams;
- (void)setTdiAuthBuffer:;
- (void)setTdiAuthParams:;
- (void)setTdiExtInfo:;
- (id)tdiAuthBuffer;
- (id)tdiAuthParams;
- (id)tdiExtInfo;
- (void).cxx_destruct;
@end

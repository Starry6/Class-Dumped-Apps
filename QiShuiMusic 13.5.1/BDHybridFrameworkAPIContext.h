@interface BDHybridFrameworkAPIContext : BDHybridAPIContext
@property (nonatomic) double outofdateTimestamp;
@property (nonatomic) NSString pageSessionId;
- (double)outofdateTimestamp;
- (id)pageSessionId;
- (void)setOutofdateTimestamp:;
- (void)setPageSessionId:;
- (id)initWithCoder:;
- (void)encodeWithCoder:;
- (void).cxx_destruct;
- (id)copyWithZone:;
@end

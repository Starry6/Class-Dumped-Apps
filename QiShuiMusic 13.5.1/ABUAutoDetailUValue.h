@interface ABUAutoDetailUValue : NSObject
@property (nonatomic) NSString wfVersion;
@property (nonatomic) NSString lastLoadEcpm;
@property (nonatomic) NSString estEcpm;
@property (nonatomic) Q estEcpmSource;
@property (nonatomic) NSString biddingEcpm;
- (id)estEcpm;
- (void)setBiddingEcpm:;
- (id)biddingEcpm;
- (unsigned long long)estEcpmSource;
- (id)lastLoadEcpm;
- (void)setEstEcpm:;
- (void)setEstEcpmSource:;
- (void)setLastLoadEcpm:;
- (void)setWfVersion:;
- (id)wfVersion;
- (id)initWithCoder:;
- (void)encodeWithCoder:;
- (void).cxx_destruct;
+ (BOOL)supportsSecureCoding;
@end

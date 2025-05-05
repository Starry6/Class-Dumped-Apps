@interface PARCardRequest : PARRequest
@property (nonatomic) NSURL cardURL;
- (id)initWithCoder:;
- (void)encodeWithCoder:;
- (void).cxx_destruct;
- (id)cardURL;
- (unsigned int)nwActivityLabel;
- (void)setCardURL:;
+ (BOOL)supportsSecureCoding;
@end

@interface AAPaymentSummaryResponse : AAResponse
@property (nonatomic) Q numberOfCards;
@property (nonatomic) NSString description;
- (unsigned long long)numberOfCards;
- (id)initWithHTTPResponse:data:;
- (void).cxx_destruct;
- (id)description;
@end

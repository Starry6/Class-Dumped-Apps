@interface MKWalletRAPReport : NSObject
@property (nonatomic) NSString merchantAdamId;
@property (nonatomic) GEORPFeedbackRequestParameters requestParameters;
@property (nonatomic) NSString reportersComment;
@property (nonatomic) NSString correlationId;
@property (nonatomic) GEORPProblem problem;
@property (nonatomic) BOOL isAppleCard;
@property (nonatomic) Q lookupTransactionType;
- (id)requestParameters;
- (void).cxx_destruct;
- (id)merchantAdamId;
- (void)setMerchantAdamId:;
- (id)correlationId;
- (void)setCorrelationId:;
- (BOOL)isAppleCard;
- (void)setIsAppleCard:;
- (id)problem;
- (id)initForMerchantIssue:merchantIndustryCode:mapsIdentifier:merchantName:merchantRawName:merchantIndustryCategory:merchantURL:merchantFormattedAddress:transactionTime:transactionType:transactionLocation:;
- (void)setReportersComment:;
- (id)reportersComment;
- (unsigned long long)lookupTransactionType;
- (void)setLookupTransactionType:;
@end

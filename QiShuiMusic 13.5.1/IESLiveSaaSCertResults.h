@interface IESLiveSaaSCertResults : NSObject
@property (nonatomic) NSError error;
@property (nonatomic) NSString ticket;
@property (nonatomic) NSNumber certStatus;
@property (nonatomic) NSNumber manualStatus;
@property (nonatomic) Q ageRange;
@property (nonatomic) NSDictionary extraParams;
@property (nonatomic) NSNumber remaidedTimes;
- (void)setExtraParams:;
- (unsigned long long)ageRange;
- (id)certStatus;
- (id)extraParams;
- (id)manualStatus;
- (id)remaidedTimes;
- (void)setAgeRange:;
- (void)setCertStatus:;
- (void)setManualStatus:;
- (void)setRemaidedTimes:;
- (void)setError:;
- (id)error;
- (void).cxx_destruct;
- (id)ticket;
- (void)setTicket:;
@end

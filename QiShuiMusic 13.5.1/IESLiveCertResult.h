@interface IESLiveCertResult : NSObject
@property (nonatomic) NSError error;
@property (nonatomic) NSNumber certStatus;
@property (nonatomic) NSNumber manualStatus;
@property (nonatomic) q ageRange;
@property (nonatomic) NSNumber remaidedTimes;
@property (nonatomic) NSString ticket;
@property (nonatomic) NSDictionary extraParams;
- (void)setExtraParams:;
- (long long)ageRange;
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

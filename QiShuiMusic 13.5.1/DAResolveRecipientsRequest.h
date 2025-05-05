@interface DAResolveRecipientsRequest : NSObject
@property (nonatomic) NSArray emailAddresses;
@property (nonatomic) BOOL retrieveCertificates;
@property (nonatomic) BOOL retrieveAvailablilty;
@property (nonatomic) NSDate startTime;
@property (nonatomic) NSDate endTime;
- (id)emailAddresses;
- (void)setStartTime:;
- (void)setEndTime:;
- (unsigned long long)hash;
- (id)startTime;
- (id)endTime;
- (void).cxx_destruct;
- (void)setEmailAddresses:;
- (id)description;
- (BOOL)isEqual:;
- (id)initWithEmailAddresses:;
- (id)initWithEmailAddresses:retrieveCertificates:retrieveAvailability:withStartTime:endTime:;
- (BOOL)retrieveCertificates;
- (void)setRetrieveCertificates:;
- (BOOL)retrieveAvailablilty;
- (void)setRetrieveAvailablilty:;
@end

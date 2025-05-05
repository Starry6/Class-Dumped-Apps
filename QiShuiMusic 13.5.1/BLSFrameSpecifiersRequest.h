@interface BLSFrameSpecifiersRequest : NSObject
@property (nonatomic) NSDateInterval dateInterval;
@property (nonatomic) NSDate previousPresentationDate;
@property (nonatomic) BOOL shouldReset;
- (id)dateInterval;
- (unsigned long long)hash;
- (void).cxx_destruct;
- (id)description;
- (BOOL)isEqual:;
- (id)initWithDateInterval:previousPresentationDate:shouldReset:completion:;
- (id)previousPresentationDate;
- (BOOL)shouldReset;
- (void)completeWithDateSpecifiers:;
@end

@interface MKTransitDepartureServiceGapFormatter : NSObject
@property (nonatomic) NSDate departureCutoffDate;
@property (nonatomic) NSTimeZone timeZone;
- (void).cxx_destruct;
- (id)timeZone;
- (id)departureCutoffDate;
- (id)initWithTimeZone:departureCutoffDate:;
- (id)lastDepartureString;
- (id)lastDepartureUntilStringFromDate:;
- (id)lastDepartureAtStringFromDate:;
- (id)_descriptionForDepartureDate:canIncludeDate:outDateFormat:;
@end

@interface DDMatchFlightNumber : DDMatch
@property (nonatomic) NSString airline;
@property (nonatomic) NSString flightNumber;
- (void).cxx_destruct;
- (id)initWithDDScannerResult:;
- (id)airline;
- (id)flightNumber;
@end

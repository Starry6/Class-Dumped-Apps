@interface DDMatchShipmentTrackingNumber : DDMatch
@property (nonatomic) NSString carrier;
@property (nonatomic) NSString trackingNumber;
- (void).cxx_destruct;
- (id)initWithDDScannerResult:;
- (id)trackingNumber;
- (id)carrier;
@end

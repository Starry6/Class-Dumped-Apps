@interface AMapShareSearchBaseRequest : AMapSearchObject
@property (nonatomic) NSArray viaCoordinates;
@property (nonatomic) NSArray viaNames;
@property (nonatomic) NSString transferBaseURL;
- (id)transferBaseURL;
- (id)transferAddress;
- (void)setViaCoordinates:;
- (void)setViaNames:;
- (id)viaCoordinates;
- (id)viaNames;
- (void).cxx_destruct;
@end

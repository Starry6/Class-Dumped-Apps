@interface GEOPriceDescription : NSObject
@property (nonatomic) GEOPDPriceDescription geoPriceDescription;
@property (nonatomic) BOOL hasPriceDescription;
@property (nonatomic) NSString priceDescription;
- (void).cxx_destruct;
- (id)priceDescription;
- (id)initWithGEOPDPriceDescription:;
- (BOOL)hasPriceDescription;
- (id)geoPriceDescription;
- (void)setGeoPriceDescription:;
@end

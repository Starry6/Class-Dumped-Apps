@interface BDCertLimitSearchResult : NSObject
@property (nonatomic) BDCertLimitModel limit;
@property (nonatomic) BDCertLimitModel fallbackLimit;
- (id)fallbackLimit;
- (void)setFallbackLimit:;
- (id)limit;
- (void)setLimit:;
- (void).cxx_destruct;
@end

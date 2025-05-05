@interface CHPrefixQueryItem : NSObject
@property (nonatomic) NSSet strokeIdentifiers;
@property (nonatomic) NSString queryResult;
@property (nonatomic) r^{CGPath=} estimatedBaseline;
- (void)dealloc;
- (id)queryResult;
- (void).cxx_destruct;
- (BOOL)isEqualToPrefixQueryItem:;
- (id)estimatedBaseline;
- (id)strokeIdentifiers;
- (id)initWithStrokeIdentifiers:queryResult:estimatedBaseline:;
@end

@interface MFIMAPConnectionFlagSearchRequest : NSObject
@property (nonatomic) Q mask;
@property (nonatomic) NSArray searchTerms;
@property (nonatomic) BOOL isPositiveMatch;
- (void).cxx_destruct;
- (unsigned long long)mask;
- (id)searchTerms;
- (id)initWithMask:searchTerms:positiveMatch:;
- (BOOL)isPositiveMatch;
+ (id)requestWithMask:searchTerms:positiveMatch:;
@end

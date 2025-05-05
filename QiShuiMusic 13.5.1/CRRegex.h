@interface CRRegex : NSObject
@property (nonatomic) NSArray supportedRegularExpressions;
- (id)init;
- (void).cxx_destruct;
- (BOOL)stringMatchesRegex:;
- (id)supportedRegularExpressions;
- (void)setSupportedRegularExpressions:;
@end

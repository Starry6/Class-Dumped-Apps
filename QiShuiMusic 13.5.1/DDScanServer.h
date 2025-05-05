@interface DDScanServer : DDScannerService
@property (nonatomic) q options;
@property (nonatomic) double timeout;
- (void)setOptions:;
- (id)init;
- (void)setTimeout:;
- (long long)options;
- (double)timeout;
- (id)scanString:;
- (void)scanString:resultsBlock:;
@end

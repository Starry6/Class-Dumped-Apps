@interface MKTransitSectionPagingFilter : NSObject
@property (nonatomic) BOOL limitNumLines;
@property (nonatomic) Q numLinesFallbackThreshold;
@property (nonatomic) Q numLinesFallbackValue;
- (BOOL)limitNumLines;
- (void)setLimitNumLines:;
- (unsigned long long)numLinesFallbackThreshold;
- (void)setNumLinesFallbackThreshold:;
- (unsigned long long)numLinesFallbackValue;
- (void)setNumLinesFallbackValue:;
+ (id)defaultFilterForDepartures;
+ (id)defaultFilterForInactiveLines;
+ (unsigned long long)_kNumLinesFallbackValue;
+ (unsigned long long)_kMaxLinesInSectionBeforePage;
+ (BOOL)_newStationCardUIEnabled;
@end

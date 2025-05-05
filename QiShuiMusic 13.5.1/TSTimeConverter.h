@interface TSTimeConverter : NSObject
- (id)init;
- (id)initWithContentsOfURL:;
- (void).cxx_destruct;
- (id)initWithTAIUTCArray:;
- (id)taiDateFromUTCDate:;
- (id)utcDateFromTAIDate:;
- (double)leapSecondForUTCDate:;
- (double)leapSecondForTAIDate:;
@end

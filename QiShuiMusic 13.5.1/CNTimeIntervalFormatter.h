@interface CNTimeIntervalFormatter : NSFormatter
@property (nonatomic) NSNumberFormatter numberFormatterWith3SigFigs;
@property (nonatomic) NSNumberFormatter numberFormatterWith4SigFigs;
- (id)stringForObjectValue:;
- (void).cxx_destruct;
- (id)numberFormatterWith4SigFigs;
- (id)numberFormatterWith3SigFigs;
- (id)stringForTimeInterval:;
+ (id)sharedFormatter;
+ (id)numberFormatterWithSignificantDigits:;
+ (id)stringForTimeInterval:;
+ (id)multiplierForOrder:;
@end

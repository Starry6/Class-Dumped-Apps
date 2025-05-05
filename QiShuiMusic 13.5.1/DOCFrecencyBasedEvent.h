@interface DOCFrecencyBasedEvent : NSObject
@property (nonatomic) NSDate lastUsedDate;
@property (nonatomic) double frecency;
- (void).cxx_destruct;
- (void)setLastUsedDate:;
- (id)lastUsedDate;
- (double)frecencyScoreAtDate:;
- (void)updateFrecencyAtDate:;
- (double)frecency;
- (void)setFrecency:;
@end

@interface AKCAReporter : NSObject
- (void)setObject:forKeyedSubscript:;
- (id)objectForKeyedSubscript:;
- (void).cxx_destruct;
- (id)initWithEvent:;
- (void)sendReport;
- (double)machAbsoluteTimeToTimeInterval:;
@end

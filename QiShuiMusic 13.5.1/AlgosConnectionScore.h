@interface AlgosConnectionScore : NSObject
@property (nonatomic) Q count;
@property (nonatomic) BOOL debug;
- (id)init;
- (void)setDebug:;
- (void)dealloc;
- (BOOL)debug;
- (unsigned long long)count;
- (id)scoreConnection:label:;
- (void)addConnectionRow:ttfb:ttlb:basettfb:basettlb:weight:failed:;
- (void)clearConnectionRows;
+ (id)connectionScore;
@end

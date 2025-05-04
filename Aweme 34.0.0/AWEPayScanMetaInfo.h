@interface AWEPayScanMetaInfo : NSObject
@property (nonatomic) NSString scanFrom;
@property (nonatomic) NSString scanEnterFrom;
@property (nonatomic) double scanTimestamp;
- (id)scanEnterFrom;
- (void)setScanEnterFrom:;
- (id)scanFrom;
- (void)setScanFrom:;
- (void).cxx_destruct;
- (void)setScanTimestamp:;
- (double)scanTimestamp;
@end

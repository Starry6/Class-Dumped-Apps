@interface PPRecordLoadingDelegate : NSObject
@property (nonatomic) NSString name;
@property (nonatomic) NSDate loadRecordsDetectedSince;
- (unsigned char)recentRecordLoadingSetup;
- (id)initWithName:;
- (void)recordLoadingCompletion;
- (unsigned char)recordLoadingSetup;
- (void).cxx_destruct;
- (unsigned char)recordLoadingHandler:;
- (id)description;
- (id)name;
- (void)recentRecordLoadingCompletion;
- (void)resetRecordData;
- (unsigned char)recentRecordLoadingHandler:;
- (id)loadRecordsDetectedSince;
- (void)setLoadRecordsDetectedSince:;
@end

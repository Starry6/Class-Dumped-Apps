@interface AWEMediaDownloadFeedbackRecorderParserItem : NSObject
@property (nonatomic) NSString name;
@property (nonatomic) q count;
@property (nonatomic) NSMutableArray errorCodeArray;
@property (nonatomic) NSMutableArray messageArray;
- (void)setErrorCodeArray:;
- (id)errorCodeArray;
- (id)messageArray;
- (void)setMessageArray:;
- (void)setCount:;
- (long long)count;
- (void).cxx_destruct;
- (void)setName:;
- (id)name;
@end

@interface DAMailboxRequest : NSObject
@property (nonatomic) NSInteger requestType;
@property (nonatomic) NSInteger bodyFormat;
@property (nonatomic) NSString messageID;
- (BOOL)mf_alwaysReportFailures;
- (int)requestType;
- (void)setRequestType:;
- (id)messageID;
- (id)init;
- (void).cxx_destruct;
- (void)setMessageID:;
- (int)bodyFormat;
- (void)setBodyFormat:;
@end

@interface AWEMessageReachNoticeTemplateStorageModel : NSObject
@property (nonatomic) NSString templateID;
@property (nonatomic) q showCount;
@property (nonatomic) double msgTime;
- (double)msgTime;
- (void)setMsgTime:;
- (id)templateID;
- (void)encodeWithCoder:;
- (void)setTemplateID:;
- (id)description;
- (void).cxx_destruct;
- (id)initWithCoder:;
- (void)setShowCount:;
- (long long)showCount;
@end

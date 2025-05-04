@interface AWEIMInitJobMetaUpdateServiceChatConfig : IESIMJobManagerJobMetaInfo
@property (nonatomic) NSSet roleIdWhiteList;
@property (nonatomic) double updateMinFreqSecond;
- (void)p_prepare;
- (id)roleIdWhiteList;
- (double)updateMinFreqSecond;
- (id)jobBody;
- (id)init;
- (void).cxx_destruct;
@end

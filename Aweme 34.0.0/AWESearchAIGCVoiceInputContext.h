@interface AWESearchAIGCVoiceInputContext : NSObject
@property (nonatomic) NSString enterFrom;
@property (nonatomic) NSString groupId;
@property (nonatomic) Q inputType;
@property (nonatomic) NSDictionary voiceAsrExtra;
- (void)setEnterFrom:;
- (id)enterFrom;
- (id)voiceAsrExtra;
- (void)setVoiceAsrExtra:;
- (void)setGroupId:;
- (id)groupId;
- (void).cxx_destruct;
- (unsigned long long)inputType;
- (void)setInputType:;
@end

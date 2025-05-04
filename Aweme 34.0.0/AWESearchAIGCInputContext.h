@interface AWESearchAIGCInputContext : NSObject
@property (nonatomic) NSString enterFrom;
@property (nonatomic) NSString groupId;
@property (nonatomic) NSString inputQuery;
@property (nonatomic) NSNumber inputMode;
@property (nonatomic) NSDictionary voiceAsrExtra;
@property (nonatomic) BOOL enableDeepSeekMode;
@property (nonatomic) BOOL isSevenSplitScreen;
- (void)setEnterFrom:;
- (id)enterFrom;
- (id)inputQuery;
- (void)setInputQuery:;
- (id)voiceAsrExtra;
- (void)setVoiceAsrExtra:;
- (BOOL)enableDeepSeekMode;
- (void)setEnableDeepSeekMode:;
- (BOOL)isSevenSplitScreen;
- (void)setIsSevenSplitScreen:;
- (id)inputMode;
- (void)setGroupId:;
- (id)groupId;
- (void)setInputMode:;
- (void).cxx_destruct;
@end

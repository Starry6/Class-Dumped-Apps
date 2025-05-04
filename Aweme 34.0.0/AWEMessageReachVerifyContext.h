@interface AWEMessageReachVerifyContext : NSObject
@property (nonatomic) AWEMessageReachVerifyComponentModel verifyModel;
@property (nonatomic) q bubbleShowResult;
@property (nonatomic) AWEHPChannelBubbleTask bubbleTask;
@property (nonatomic) NSDictionary verifyExtra;
@property (nonatomic) NSString source;
- (id)bubbleTask;
- (void)setBubbleTask:;
- (id)verifyExtra;
- (void)setVerifyExtra:;
- (void)setVerifyModel:;
- (void)setBubbleShowResult:;
- (id)verifyModel;
- (long long)bubbleShowResult;
- (void).cxx_destruct;
- (id)source;
- (void)setSource:;
@end

@interface AWEYAPChannelGuideRequestModel : NSObject
@property (nonatomic) NSString bizCode;
@property (nonatomic) NSString sourceCode;
@property (nonatomic) NSDictionary conditionParam;
@property (nonatomic) BOOL isModal;
@property (nonatomic) AWEYAPChannelGuideContext context;
- (id)bizCode;
- (id)sceneUniqueKey;
- (id)conditionParam;
- (void)setConditionParam:;
- (void)setSourceCode:;
- (void)setBizCode:;
- (id)init;
- (id)sourceCode;
- (void)setContext:;
- (void).cxx_destruct;
- (id)context;
- (BOOL)isModal;
- (void)setIsModal:;
@end

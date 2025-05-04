@interface AWEPlayInteractionDescriptionFunctionClickDurationManager : NSObject
@property (nonatomic) AWEPlayInteractionDescriptionContext parserContext;
@property (nonatomic) AWEPlayInteractionDescriptionExtraModel extraModel;
@property (nonatomic) NSString clickMethod;
@property (nonatomic) double videoFunctionClickTimeInterval;
- (id)extraModel;
- (void)setExtraModel:;
- (void)setClickMethod:;
- (void)setVideoFunctionClickTimeInterval:;
- (id)clickMethod;
- (double)videoFunctionClickTimeInterval;
- (void).cxx_destruct;
- (void)reset;
- (id)parserContext;
- (void)setParserContext:;
+ (id)sharedInstance;
@end

@interface BWStillImageConditionalRouterPersonSegmentationAndMattingConfiguration : BWStillImageConditionalRouterConfiguration
@property (nonatomic) I defaultOutputIndex;
@property (nonatomic) I personSegmentationAndMattingOuputIndex;
- (id)init;
- (unsigned int)defaultOutputIndex;
- (unsigned int)personSegmentationAndMattingOuputIndex;
+ (id)personSegmentationAndMattingConfiguration;
@end

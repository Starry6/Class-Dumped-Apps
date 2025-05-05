@interface VCImageAttributeRules : NSObject
@property (nonatomic) NSMutableDictionary imageAttributeRules;
- (id)init;
- (void)dealloc;
- (id)description;
- (id)imageAttributeRules;
- (void)setImageAttributeRules:;
- (void)addRuleForVideoPayload:withDirection:width:height:frameRate:priority:interface:;
- (id)extractDimensionsForInterface:direction:;
- (void)swapSendAndReceiveRules;
- (void)interfaceKey:forInterface:directionKey:forDirection:;
@end

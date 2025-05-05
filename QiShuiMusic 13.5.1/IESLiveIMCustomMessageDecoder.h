@interface IESLiveIMCustomMessageDecoder : IESLiveIMPayloadDecoder
@property (nonatomic) Q type;
- (void)decode:completion:;
- (void)logEvent:params:;
- (id)transformValue:withExtra:;
- (id)init;
- (void)setType:;
- (unsigned long long)type;
@end

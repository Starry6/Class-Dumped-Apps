@interface OPTTSMutableTextToSpeechRouterStreamingStreamingResponse : OPTTSTextToSpeechRouterStreamingStreamingResponse
@property (nonatomic) q content_type;
@property (nonatomic) OPTTSBeginTextToSpeechStreamingResponse contentAsOPTTSBeginTextToSpeechStreamingResponse;
@property (nonatomic) OPTTSPartialTextToSpeechStreamingResponse contentAsOPTTSPartialTextToSpeechStreamingResponse;
@property (nonatomic) OPTTSFinalTextToSpeechStreamingResponse contentAsOPTTSFinalTextToSpeechStreamingResponse;
@property (nonatomic) NSObject<FLTBFBufferAccessor><NSCopying> content;
- (void)setContent:;
- (id)init;
- (id)copyWithZone:;
- (long long)content_type;
- (void)setContent_type:;
- (id)contentAsOPTTSBeginTextToSpeechStreamingResponse;
- (void)setContentAsOPTTSBeginTextToSpeechStreamingResponse:;
- (id)contentAsOPTTSPartialTextToSpeechStreamingResponse;
- (void)setContentAsOPTTSPartialTextToSpeechStreamingResponse:;
- (id)contentAsOPTTSFinalTextToSpeechStreamingResponse;
- (void)setContentAsOPTTSFinalTextToSpeechStreamingResponse:;
+ (Class)content_mutableClassForType:;
+ (long long)content_typeForMutableObject:;
+ (long long)content_typeForObject:;
@end

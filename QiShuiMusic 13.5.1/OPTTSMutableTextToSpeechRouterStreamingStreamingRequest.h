@interface OPTTSMutableTextToSpeechRouterStreamingStreamingRequest : OPTTSTextToSpeechRouterStreamingStreamingRequest
@property (nonatomic) q content_type;
@property (nonatomic) OPTTSStartTextToSpeechStreamingRequest contentAsOPTTSStartTextToSpeechStreamingRequest;
@property (nonatomic) NSObject<FLTBFBufferAccessor><NSCopying> content;
- (void)setContent:;
- (id)init;
- (id)copyWithZone:;
- (long long)content_type;
- (void)setContent_type:;
- (id)contentAsOPTTSStartTextToSpeechStreamingRequest;
- (void)setContentAsOPTTSStartTextToSpeechStreamingRequest:;
+ (Class)content_mutableClassForType:;
+ (long long)content_typeForMutableObject:;
+ (long long)content_typeForObject:;
@end

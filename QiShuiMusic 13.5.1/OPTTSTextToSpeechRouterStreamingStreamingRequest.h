@interface OPTTSTextToSpeechRouterStreamingStreamingRequest : NSObject
@property (nonatomic) q content_type;
@property (nonatomic) OPTTSStartTextToSpeechStreamingRequest contentAsOPTTSStartTextToSpeechStreamingRequest;
@property (nonatomic) NSObject<FLTBFBufferAccessor><NSCopying> content;
- (id)content;
- (void).cxx_destruct;
- (id)copyWithZone:;
- (long long)content_type;
- (id)contentAsOPTTSStartTextToSpeechStreamingRequest;
- (id)flatbuffData;
- (id)initWithFlatbuffData:;
- (id)initAndVerifyWithFlatbuffData:;
- (id)initWithFlatbuffData:root:;
- (id)initWithFlatbuffData:root:verify:;
- (id)addObjectToBuffer:;
+ (Class)content_immutableClassForType:;
+ (long long)content_typeForImmutableObject:;
@end

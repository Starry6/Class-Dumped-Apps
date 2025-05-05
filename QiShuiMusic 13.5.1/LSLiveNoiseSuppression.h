@interface LSLiveNoiseSuppression : NSObject
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)initWithSample:channels:useSingleChannel:;
- (id)initWithSample:channels:useSingleChannel:resourceUrl:;
- (void)processBufferList:inNumberFrames:;
- (void)setParams:param2:param3:;
- (void)dealloc;
- (void).cxx_destruct;
- (id).cxx_construct;
@end

@interface TTVideoEnginePlayInfo : NSObject
@property (nonatomic) TTVideoEngineInfoModel videoInfo;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)allURLWithDefinitionType:transformedURL:;
- (void)setVideoInfo:;
- (id)supportedQualityInfos;
- (id)supportedResolutionTypes;
- (id)videoInfo;
- (id)videoInfoForType:;
- (id)videoInfoForType:otherCondition:;
- (id)initWithDictionary:;
- (id)initWithCoder:;
- (void)encodeWithCoder:;
- (void).cxx_destruct;
- (id)description;
+ (BOOL)supportsSecureCoding;
@end

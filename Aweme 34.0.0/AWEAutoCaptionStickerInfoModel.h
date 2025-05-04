@interface AWEAutoCaptionStickerInfoModel : MTLModel
@property (nonatomic) q locationType;
@property (nonatomic) NSString audioUri;
@property (nonatomic) NSString taskId;
@property (nonatomic) NSArray captions;
@property (nonatomic) NSArray captionInfos;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)captions;
- (void)setCaptions:;
- (id)audioUri;
- (void)setAudioUri:;
- (id)captionInfos;
- (void)setCaptionInfos:;
- (void)setLocationType:;
- (long long)locationType;
- (void).cxx_destruct;
- (id)taskId;
- (void)setTaskId:;
+ (id)captionsJSONTransformer;
+ (id)captionInfosJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
@end

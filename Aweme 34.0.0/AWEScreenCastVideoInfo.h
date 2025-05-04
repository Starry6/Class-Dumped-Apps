@interface AWEScreenCastVideoInfo : MTLModel
@property (nonatomic) NSString videoID;
@property (nonatomic) NSString imageUrl;
@property (nonatomic) NSArray cutImageUrlList;
@property (nonatomic) NSArray playInfos;
@property (nonatomic) double duration;
@property (nonatomic) NSDictionary dictionaryValue;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)playInfos;
- (id)cutImageUrlList;
- (void)setCutImageUrlList:;
- (void)setPlayInfos:;
- (BOOL)isExpired;
- (void)setDuration:;
- (void).cxx_destruct;
- (double)duration;
- (id)imageUrl;
- (void)setImageUrl:;
- (id)videoID;
- (void)setVideoID:;
+ (id)playInfosJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
@end

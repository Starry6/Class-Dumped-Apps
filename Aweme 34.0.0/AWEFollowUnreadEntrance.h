@interface AWEFollowUnreadEntrance : MTLModel
@property (nonatomic) NSString insertIds;
@property (nonatomic) NSString nickname;
@property (nonatomic) NSString count;
@property (nonatomic) NSArray urls;
@property (nonatomic) NSDictionary trackParams;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)trackParams;
- (void)setTrackParams:;
- (id)insertIds;
- (void)setInsertIds:;
- (id)nickname;
- (void)setCount:;
- (void)setUrls:;
- (id)count;
- (void).cxx_destruct;
- (void)setNickname:;
- (id)urls;
+ (id)urlsJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
@end

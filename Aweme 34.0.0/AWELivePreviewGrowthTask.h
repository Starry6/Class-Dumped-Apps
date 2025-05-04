@interface AWELivePreviewGrowthTask : MTLModel
@property (nonatomic) NSString taskKey;
@property (nonatomic) NSString mainText;
@property (nonatomic) NSString subText;
@property (nonatomic) NSDictionary extra;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)setExtra:;
- (id)subText;
- (void)setSubText:;
- (id)taskKey;
- (void)setTaskKey:;
- (id)extra;
- (void).cxx_destruct;
- (id)mainText;
- (void)setMainText:;
+ (id)parseFromOriginRoomModel:;
@end

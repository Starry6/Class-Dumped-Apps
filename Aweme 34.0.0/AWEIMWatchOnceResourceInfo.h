@interface AWEIMWatchOnceResourceInfo : MTLModel
@property (nonatomic) AWEIMWatchOncePosterResourceInfo poster;
@property (nonatomic) AWEIMWatchOnceVideoResourceInfo video;
@property (nonatomic) NSArray checkPics;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)checkPics;
- (void)setCheckPics:;
- (id)video;
- (void)setVideo:;
- (id)poster;
- (void).cxx_destruct;
- (void)setPoster:;
+ (id)videoJSONTransformer;
+ (id)posterJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
@end

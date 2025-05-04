@interface AWEServerHandleVideoData : MTLModel
@property (nonatomic) NSString key;
@property (nonatomic) AWEServerHandleVideoModel model;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)setModel:;
- (void)setKey:;
- (id)key;
- (id)model;
- (void).cxx_destruct;
+ (id)JSONKeyPathsByPropertyKey;
+ (id)modelJSONTransformer;
@end

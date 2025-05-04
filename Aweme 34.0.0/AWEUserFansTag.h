@interface AWEUserFansTag : MTLModel
@property (nonatomic) q type;
@property (nonatomic) NSString text;
@property (nonatomic) NSString url;
@property (nonatomic) AWEURLModel icon;
@property (nonatomic) NSString labelTrack;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)setLabelTrack:;
- (id)labelTrack;
- (void)setUrl:;
- (id)icon;
- (void)setText:;
- (id)text;
- (long long)type;
- (void)setType:;
- (void)setIcon:;
- (void).cxx_destruct;
- (id)url;
+ (id)iconJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
@end

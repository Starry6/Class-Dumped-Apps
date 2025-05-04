@interface AWELVideoPreviewConfig : MTLModel
@property (nonatomic) AWEURLModel upCover;
@property (nonatomic) AWEURLModel downCover;
@property (nonatomic) AWEURLModel backgroundCover;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)upCover;
- (void)setUpCover:;
- (id)downCover;
- (void)setDownCover:;
- (id)backgroundCover;
- (void)setBackgroundCover:;
- (void).cxx_destruct;
+ (id)upCoverJSONTransformer;
+ (id)downCoverJSONTransformer;
+ (id)backgroundCoverJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
@end

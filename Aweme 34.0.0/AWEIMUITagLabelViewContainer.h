@interface AWEIMUITagLabelViewContainer : UIView
@property (nonatomic) {CGSize=dd} size;
@property (nonatomic) NSArray models;
@property (nonatomic) double tagInterval;
@property (nonatomic) {UIEdgeInsets=dddd} minEdgeInsets;
@property (nonatomic) q alignment;
- (void)configWithTagModels:inSize:;
- (void)setTagInterval:;
- (void)__clearSubviews;
- (id)__addTagWithinWidth:height:;
- (id)minEdgeInsets;
- (void)__setupTagsFrameFromLeft:containerHeight:;
- (double)tagInterval;
- (void)configWithTagModels:;
- (void)setMinEdgeInsets:;
- (void)setAlignment:;
- (void)setModels:;
- (id)size;
- (void).cxx_destruct;
- (void)setSize:;
- (id)models;
- (long long)alignment;
- (void)clearTags;
@end

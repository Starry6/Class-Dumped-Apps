@interface AWEAnchorButton : MTLModel
@property (nonatomic) NSString openUrl;
@property (nonatomic) NSString buttonText;
@property (nonatomic) AWEAnchorTrackModel trackInfo;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)openUrl;
- (void)setOpenUrl:;
- (id)buttonText;
- (void).cxx_destruct;
- (void)setButtonText:;
- (void)setTrackInfo:;
- (id)trackInfo;
+ (id)JSONKeyPathsByPropertyKey;
+ (id)trackInfoJSONTransformer;
@end

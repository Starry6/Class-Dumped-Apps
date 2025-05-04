@interface AWEVideoHallPopupInfoModel : MTLModel
@property (nonatomic) AWEURLModel img;
@property (nonatomic) NSString title;
@property (nonatomic) NSString intro;
@property (nonatomic) NSString buttonText;
@property (nonatomic) NSString schema;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)setIntro:;
- (void)setImg:;
- (id)schema;
- (void)setSchema:;
- (id)buttonText;
- (void).cxx_destruct;
- (id)title;
- (void)setTitle:;
- (void)setButtonText:;
- (id)img;
- (id)intro;
+ (id)imgJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
@end

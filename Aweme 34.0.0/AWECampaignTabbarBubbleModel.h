@interface AWECampaignTabbarBubbleModel : MTLModel
@property (nonatomic) NSString text;
@property (nonatomic) AWECampaignImageModel image;
@property (nonatomic) UIImage bubbleImage;
@property (nonatomic) NSNumber disappearThreshold;
@property (nonatomic) NSDictionary dictionaryValue;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)bubbleImage;
- (void)setBubbleImage:;
- (id)disappearThreshold;
- (void)setDisappearThreshold:;
- (id)image;
- (void)setImage:;
- (void)setText:;
- (id)text;
- (BOOL)isEmpty;
- (void).cxx_destruct;
+ (id)imageJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
@end

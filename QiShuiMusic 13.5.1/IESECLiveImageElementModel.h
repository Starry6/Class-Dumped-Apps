@interface IESECLiveImageElementModel : MTLModel
@property (nonatomic) IESECLiveImageURLModel image;
@property (nonatomic) IESECLiveImageBubbleElementModel bubbleElement;
@property (nonatomic) double imageRadius;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)setImageRadius:;
- (id)bubbleElement;
- (double)imageRadius;
- (void)setBubbleElement:;
- (void)setImage:;
- (void).cxx_destruct;
- (id)image;
+ (id)JSONKeyPathsByPropertyKey;
@end

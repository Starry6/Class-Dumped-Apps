@interface IESEffectSampleVideoModel : MTLModel
@property (nonatomic) IESEffectURLModel coverURL;
@property (nonatomic) IESEffectURLModel playURL;
@property (nonatomic) IESEffectURLModel h264URL;
@property (nonatomic) IESEffectURLModel downloadURL;
@property (nonatomic) IESEffectURLModel dynamicCover;
@property (nonatomic) NSNumber height;
@property (nonatomic) NSNumber width;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)h264URL;
- (id)dynamicCover;
- (id)height;
- (id)width;
- (id)downloadURL;
- (void).cxx_destruct;
- (id)playURL;
- (id)coverURL;
+ (id)JSONKeyPathsByPropertyKey;
+ (id)JSONTransformerForKey:;
@end

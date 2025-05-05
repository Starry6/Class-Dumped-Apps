@interface IESECRitTagUIItemModel : MTLModel
@property (nonatomic) Q itemType;
@property (nonatomic) IESECURLModel image;
@property (nonatomic) IESECRitTagTextConfigModel textConfig;
@property (nonatomic) IESECRitTagSplitorConfig splitor;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)splitor;
- (void)setSplitor:;
- (void)setTextConfig:;
- (id)textConfig;
- (void)setItemType:;
- (void)setImage:;
- (unsigned long long)itemType;
- (void).cxx_destruct;
- (id)image;
+ (id)JSONKeyPathsByPropertyKey;
@end

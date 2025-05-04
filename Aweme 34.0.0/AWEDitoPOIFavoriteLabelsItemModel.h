@interface AWEDitoPOIFavoriteLabelsItemModel : MTLModel
@property (nonatomic) AWEURLModel imageURL;
@property (nonatomic) NSString text;
@property (nonatomic) Q type;
@property (nonatomic) NSString itemValue;
@property (nonatomic) BOOL selected;
@property (nonatomic) BOOL hasTrack;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)setHasTrack:;
- (void)setText:;
- (id)text;
- (unsigned long long)type;
- (void)setType:;
- (id)imageURL;
- (void).cxx_destruct;
- (BOOL)selected;
- (void)setImageURL:;
- (void)setSelected:;
- (BOOL)hasTrack;
- (id)itemValue;
- (void)setItemValue:;
+ (id)JSONKeyPathsByPropertyKey;
@end

@interface AWEPOIAlbumHeadRightItem : AWEBaseApiModel
@property (nonatomic) NSString itemID;
@property (nonatomic) NSString title;
@property (nonatomic) NSString icon;
@property (nonatomic) NSString schema;
- (id)schema;
- (id)itemID;
- (void)setItemID:;
- (void)setSchema:;
- (id)icon;
- (void)setIcon:;
- (void).cxx_destruct;
- (id)title;
- (void)setTitle:;
+ (id)JSONKeyPathsByPropertyKey;
@end

@interface GEOAnnotatedItemList : NSObject
@property (nonatomic) <GEOPictureItemContainer> pictureItemContainer;
@property (nonatomic) <GEOTextItemContainer> textItemContainer;
@property (nonatomic) NSString title;
@property (nonatomic) NSInteger annotatedItemStyle;
@property (nonatomic) GEOMapItemAttribution attribution;
- (id)init;
- (id)attribution;
- (id)title;
- (void).cxx_destruct;
- (id)pictureItemContainer;
- (id)textItemContainer;
- (int)annotatedItemStyle;
- (id)initWithPictureItemContainer:textItemContainer:title:annotatedItemStyle:attribution:;
- (id)initWithAnnotatedItemList:attribution:;
@end

@interface MFPopupButtonItem : NSObject
@property (nonatomic) NSString title;
@property (nonatomic) NSString subtitle;
@property (nonatomic) NSString popupTitle;
@property (nonatomic) q style;
- (id)copy;
- (void)setStyle:;
- (void)setSubtitle:;
- (void)setTitle:;
- (id)title;
- (void).cxx_destruct;
- (id)subtitle;
- (long long)style;
- (BOOL)isEqual:;
- (id)popupTitle;
- (void)setPopupTitle:;
+ (id)itemWithTitle:;
+ (id)itemWithTitle:style:;
+ (id)itemWithTitle:popupTitle:subtitle:style:;
@end

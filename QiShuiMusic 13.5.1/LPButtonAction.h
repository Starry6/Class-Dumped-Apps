@interface LPButtonAction : NSObject
@property (nonatomic) NSString title;
@property (nonatomic) NSString visibleTitle;
@property (nonatomic) LPImage image;
@property (nonatomic) LPImage visibleImage;
@property (nonatomic) @? handler;
@property (nonatomic) BOOL selected;
@property (nonatomic) BOOL header;
- (void)setHeader:;
- (void)setSelected:;
- (void)setHandler:;
- (void)setImage:;
- (void)setTitle:;
- (BOOL)isSelected;
- (id)handler;
- (id)title;
- (BOOL)isHeader;
- (void).cxx_destruct;
- (id)image;
- (void)setVisibleImage:;
- (id)visibleTitle;
- (id)visibleImage;
- (void)setVisibleTitle:;
+ (id)actionWithTitle:image:handler:;
@end

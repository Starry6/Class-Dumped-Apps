@interface UIPreviewAction : NSObject
@property (nonatomic) @? handler;
@property (nonatomic) q style;
@property (nonatomic) UIImage image;
@property (nonatomic) UIColor color;
@property (nonatomic) NSString title;
@property (nonatomic) NSString identifier;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)_color;
- (id)identifier;
- (void)setStyle:;
- (void)setHandler:;
- (void)setImage:;
- (void)setTitle:;
- (id)handler;
- (id)title;
- (void).cxx_destruct;
- (void)_setColor:;
- (long long)style;
- (void)setIdentifier:;
- (id)image;
- (id)copyWithZone:;
- (id)_effectiveColor;
- (id)_effectiveImage;
+ (id)_checkmarkImage;
+ (id)actionWithTitle:style:handler:;
+ (id)_actionWithTitle:style:image:handler:;
+ (id)_actionWithTitle:color:image:handler:;
+ (id)_actionWithTitle:style:color:image:handler:;
+ (id)_actionWithPreviewMenuItem:;
@end

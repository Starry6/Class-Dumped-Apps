@interface IESLiveSaaSStickerModel : MTLModel
@property (nonatomic) NSArray imageStickers;
@property (nonatomic) NSArray textStickers;
@property (nonatomic) NSArray combineStickers;
@property (nonatomic) NSArray reserStickerAppearance;
@property (nonatomic) BOOL enableNewPanelView;
@property (nonatomic) BOOL canEditTextStickers;
@property (nonatomic) NSString promptForTextStickers;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)combineStickers;
- (BOOL)canEditTextStickers;
- (BOOL)enableNewPanelView;
- (id)imageStickers;
- (id)promptForTextStickers;
- (id)reserStickerAppearance;
- (void)setReserStickerAppearance:;
- (id)textStickers;
- (void).cxx_destruct;
+ (id)combineStickersJSONTransformer;
+ (id)imageStickersJSONTransformer;
+ (id)textStickersJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
@end

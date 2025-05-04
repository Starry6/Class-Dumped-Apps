@interface AWEVideoStickerSavePhotoInfo : MTLModel
@property (nonatomic) NSArray photoNames;
@property (nonatomic) NSString toastText;
@property (nonatomic) NSString waterMarkPath;
@property (nonatomic) BOOL shouldRemoveLabel;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)toastText;
- (void)setToastText:;
- (id)propSavePhoto;
- (id)waterMarkPath;
- (void)setWaterMarkPath:;
- (BOOL)shouldRemoveLabel;
- (void)setShouldRemoveLabel:;
- (id)photoNames;
- (void)setPhotoNames:;
- (id)initWithPropSavePhoto:;
- (void).cxx_destruct;
- (id)copyWithZone:;
+ (id)JSONKeyPathsByPropertyKey;
@end

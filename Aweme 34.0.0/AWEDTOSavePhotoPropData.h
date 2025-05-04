@interface AWEDTOSavePhotoPropData : MTLModel
@property (nonatomic) NSArray savePhotos;
@property (nonatomic) NSString toastText;
@property (nonatomic) NSString waterMarkPath;
@property (nonatomic) BOOL shouldRemoveLabel;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)toastText;
- (void)setToastText:;
- (id)savePhotos;
- (void)setSavePhotos:;
- (id)waterMarkPath;
- (void)setWaterMarkPath:;
- (BOOL)shouldRemoveLabel;
- (void)setShouldRemoveLabel:;
- (void).cxx_destruct;
+ (id)JSONKeyPathsByPropertyKey;
@end

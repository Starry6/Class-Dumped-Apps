@interface AWESelectTemplateDataExporterInputModel : NSObject
@property (nonatomic) NSArray currentTemplateAssets;
@property (nonatomic) NSArray canReplaceTextFragments;
@property (nonatomic) NSArray selectCilpViewDisplayFragments;
@property (nonatomic) NSArray selectCilpViewDisplayNLESlots;
- (void)setCurrentTemplateAssets:;
- (void)setSelectCilpViewDisplayFragments:;
- (id)currentTemplateAssets;
- (id)canReplaceTextFragments;
- (void)setCanReplaceTextFragments:;
- (id)selectCilpViewDisplayFragments;
- (id)selectCilpViewDisplayNLESlots;
- (void)setSelectCilpViewDisplayNLESlots:;
- (void).cxx_destruct;
@end

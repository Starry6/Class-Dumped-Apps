@interface CUIThemeSchemaLayer : NSObject
@property (nonatomic) NSArray renditions;
@property (nonatomic) NSString name;
@property (nonatomic) Q index;
- (void)dealloc;
- (void)setName:;
- (unsigned long long)index;
- (void)setIndex:;
- (id)description;
- (id)name;
- (id)renditions;
- (void)setRenditions:;
- (id)initWithRenditions:name:index:;
- (double)translateFromWidthsOrHeightsToLeftsOrTops:leftsOrTops:;
- (void)calculateColumLefts:rowTops:totalSize:forPartFeatures:;
+ (id)layerWithRenditions:name:index:;
@end

@interface ISiOSAppRecipe : NSObject
@property (nonatomic) Q options;
@property (nonatomic) BOOL shouldApplyMask;
@property (nonatomic) BOOL shouldDrawBorder;
@property (nonatomic) BOOL templateVariant;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)setOptions:;
- (BOOL)templateVariant;
- (void)setTemplateVariant:;
- (BOOL)shouldApplyMask;
- (id)layerTreeForSize:scale:;
- (unsigned long long)options;
- (BOOL)shouldDrawBorder;
- (void)setShouldApplyMask:;
- (void)setShouldDrawBorder:;
@end

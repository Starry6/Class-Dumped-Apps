@interface ISGenericRecipe : NSObject
@property (nonatomic) Q backgroundStyle;
@property (nonatomic) BOOL templateVariant;
@property (nonatomic) BOOL selectedVariant;
@property (nonatomic) Q borderWidth;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (BOOL)selectedVariant;
- (BOOL)templateVariant;
- (void)setBackgroundStyle:;
- (void)setTemplateVariant:;
- (unsigned long long)backgroundStyle;
- (unsigned long long)borderWidth;
- (id)layerTreeForSize:scale:;
- (void)setSelectedVariant:;
- (void)setBorderWidth:;
@end

@interface CUITextStyle : CUINamedLookup
@property (nonatomic) NSString fontName;
@property (nonatomic) double fontSize;
@property (nonatomic) double maxPointSize;
@property (nonatomic) double minPointSize;
@property (nonatomic) q scalingStyle;
@property (nonatomic) q alignment;
- (void)dealloc;
- (double)maxPointSize;
- (double)fontSize;
- (id)initWithName:usingRenditionKey:fromTheme:;
- (long long)alignment;
- (id)fontName;
- (double)minPointSize;
- (long long)scalingStyle;
@end

@interface CUINamedColor : CUINamedLookup
@property (nonatomic) ^{CGColor=} cgColor;
@property (nonatomic) BOOL substituteWithSystemColor;
@property (nonatomic) NSString systemColorName;
- (void)dealloc;
- (BOOL)substituteWithSystemColor;
- (id)cgColor;
- (id)systemColorName;
- (id)initWithName:usingRenditionKey:fromTheme:;
@end

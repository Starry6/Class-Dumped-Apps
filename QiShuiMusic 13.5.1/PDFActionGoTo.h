@interface PDFActionGoTo : PDFAction
@property (nonatomic) PDFDestination destination;
- (void)setDestination:;
- (id)initWithDestination:;
- (void)commonInit;
- (id)destination;
- (void).cxx_destruct;
- (id)description;
- (id)copyWithZone:;
- (id)toolTip;
- (void)addDestinationToDictionaryRef:;
- (id)createDictionaryRef;
- (id)initWithActionDictionary:forDocument:forPage:;
- (id)toolTipNoLabel;
@end

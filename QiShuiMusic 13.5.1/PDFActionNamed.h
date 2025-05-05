@interface PDFActionNamed : PDFAction
@property (nonatomic) q name;
- (void)setName:;
- (void)commonInit;
- (id)initWithName:;
- (void).cxx_destruct;
- (id)description;
- (long long)name;
- (id)copyWithZone:;
- (id)toolTip;
- (void)addNameToDictionaryRef:;
- (id)createDictionaryRef;
- (id)initWithActionDictionary:forDocument:forPage:;
@end

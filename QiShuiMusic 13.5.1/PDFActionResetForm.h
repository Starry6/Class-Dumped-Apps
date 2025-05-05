@interface PDFActionResetForm : PDFAction
@property (nonatomic) NSArray fields;
@property (nonatomic) BOOL fieldsIncludedAreCleared;
- (id)init;
- (void)setFields:;
- (void)commonInit;
- (id)fields;
- (void).cxx_destruct;
- (id)description;
- (id)copyWithZone:;
- (id)toolTip;
- (void)addFlagsToDictionaryRef:;
- (id)createDictionaryRef;
- (id)initWithActionDictionary:forDocument:forPage:;
- (BOOL)fieldsIncludedAreCleared;
- (void)setFieldsIncludedAreCleared:;
- (void)addFieldsToDictionaryRef:;
@end

@interface PDFAction : NSObject
@property (nonatomic) NSString type;
- (id)init;
- (void)setType:;
- (void)commonInit;
- (id)type;
- (void).cxx_destruct;
- (id)description;
- (id)copyWithZone:;
- (id)toolTip;
- (id)createDictionaryRef;
- (id)nextActions;
- (id)initWithActionDictionary:forDocument:forPage:;
- (id)toolTipNoLabel;
- (void)_setNextActions:;
- (void)_setNextAction:forDocument:forPage:;
- (void)_setNextActions:forDocument:forPage:;
- (id)baseURLForDocument:;
+ (id)actionWithActionDictionary:forDocument:forPage:;
+ (Class)_classForActionDictionary:;
@end

@interface PDFActionURL : PDFAction
@property (nonatomic) BOOL suspiciousURL;
@property (nonatomic) NSURL URL;
- (id)initWithURL:;
- (void)commonInit;
- (void).cxx_destruct;
- (id)description;
- (void)setURL:;
- (id)URL;
- (id)copyWithZone:;
- (id)toolTip;
- (id)createDictionaryRef;
- (id)initWithActionDictionary:forDocument:forPage:;
- (BOOL)isSuspiciousURL;
@end

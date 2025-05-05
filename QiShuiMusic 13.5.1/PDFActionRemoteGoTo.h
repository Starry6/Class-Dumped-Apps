@interface PDFActionRemoteGoTo : PDFAction
@property (nonatomic) Q pageIndex;
@property (nonatomic) {CGPoint=dd} point;
@property (nonatomic) NSURL URL;
- (id)point;
- (void)commonInit;
- (void)setPageIndex:;
- (void).cxx_destruct;
- (unsigned long long)pageIndex;
- (id)description;
- (void)setURL:;
- (id)URL;
- (id)copyWithZone:;
- (void)setPoint:;
- (id)toolTip;
- (void)addDestinationToDictionaryRef:;
- (id)createDictionaryRef;
- (id)initWithActionDictionary:forDocument:forPage:;
- (id)toolTipNoLabel;
- (id)initWithPageIndex:atPoint:fileURL:;
@end

@interface TLKGridImageItem : TLKArrangementItem
@property (nonatomic) {CGRect={CGPoint=dd}{CGSize=dd}} frame;
@property (nonatomic) {_NSRange=QQ} columnRange;
@property (nonatomic) Q row;
@property (nonatomic) double horizontalHuggingPriority;
@property (nonatomic) double horizontalCompressionResistance;
@property (nonatomic) NUISizeCache sizeCache;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)setFrame:;
- (unsigned long long)row;
- (id)frame;
- (void).cxx_destruct;
- (id)description;
- (void)setRow:;
- (id)sizeForTargetSize:;
- (id)columnRange;
- (void)setColumnRange:;
- (double)horizontalHuggingPriority;
- (void)setHorizontalHuggingPriority:;
- (double)horizontalCompressionResistance;
- (void)setHorizontalCompressionResistance:;
- (id)sizeCache;
- (void)setSizeCache:;
@end

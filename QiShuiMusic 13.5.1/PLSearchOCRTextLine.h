@interface PLSearchOCRTextLine : NSObject
@property (nonatomic) {CGRect={CGPoint=dd}{CGSize=dd}} textBounds;
@property (nonatomic) BOOL isTitle;
@property (nonatomic) NSArray candidates;
- (id)candidates;
- (void).cxx_destruct;
- (id)description;
- (id)initWithTextBounds:isTitle:candidates:;
- (id)textBounds;
- (BOOL)isTitle;
@end

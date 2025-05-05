@interface UIDictationToken : NSObject
@property (nonatomic) NSString text;
@property (nonatomic) BOOL removeSpaceBefore;
@property (nonatomic) BOOL removeSpaceAfter;
- (void)setText:;
- (id)initWithCoder:;
- (void)encodeWithCoder:;
- (void).cxx_destruct;
- (id)description;
- (id)text;
- (BOOL)isEqual:;
- (BOOL)removeSpaceBefore;
- (BOOL)removeSpaceAfter;
- (id)initWithText:removeSpaceBefore:removeSpaceAfter:;
- (id)_descriptionExtra;
- (void)setRemoveSpaceBefore:;
+ (BOOL)supportsSecureCoding;
@end

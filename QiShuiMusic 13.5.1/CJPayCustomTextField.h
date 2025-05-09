@interface CJPayCustomTextField : UITextField
@property (nonatomic) q separateCount;
@property (nonatomic) NSArray separateArray;
@property (nonatomic) q limitCount;
@property (nonatomic) BOOL supportSeparate;
@property (nonatomic) NSCharacterSet supportCharacterSet;
@property (nonatomic) NSString userInputContent;
@property (nonatomic) <CJPayCustomTextFieldDelegate> textFieldDelegate;
@property (nonatomic) q locationIndex;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (BOOL)supportSeparate;
- (id)changeStringWithOperateString:withOperateRange:withOriginString:;
- (long long)getSpaceDelta:newStr:;
- (BOOL)isNewStrSatisfyLimit:;
- (id)separateArray;
- (long long)separateCount;
- (void)setSeparateArray:;
- (void)setSeparateCount:;
- (void)setSupportCharacterSet:;
- (void)setSupportSeparate:;
- (id)supportCharacterSet;
- (id)userInputContent;
- (long long)limitCount;
- (void)setLimitCount:;
- (void)textFieldDidEndEditing:;
- (id)caretRectForPosition:;
- (BOOL)textFieldShouldClear:;
- (void)textFieldDidBeginEditing:;
- (id)initWithFrame:;
- (void)setSelectedRange:;
- (void).cxx_destruct;
- (id)clearButtonRectForBounds:;
- (id)rightViewRectForBounds:;
- (BOOL)resignFirstResponder;
- (BOOL)textField:shouldChangeCharactersInRange:replacementString:;
- (long long)locationIndex;
- (void)setLocationIndex:;
- (id)textFieldDelegate;
- (void)setTextFieldDelegate:;
@end

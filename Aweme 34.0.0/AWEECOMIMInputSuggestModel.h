@interface AWEECOMIMInputSuggestModel : NSObject
@property (nonatomic) NSAttributedString suggestText;
- (id)suggestText;
- (void)setSuggestText:;
- (void).cxx_destruct;
- (id)initWithDict:;
+ (void)fetchInputSuggestDataWithInputText:shopID:requestCommonParams:networkImp:completion:;
@end

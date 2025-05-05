@interface AWEIMCompanyMessage : AWEIMMessage
@property (nonatomic) NSString originContent;
@property (nonatomic) NSString pushDetail;
@property (nonatomic) NSDictionary actions;
@property (nonatomic) AWEIMLinkTextUtility textUtility;
- (void)setTextUtility:;
- (id)calculateAttributedContent;
- (id)getContentDict;
- (id)initWithContentDict:;
- (id)linkArray;
- (id)originContent;
- (id)pushDetail;
- (void)setOriginContent:;
- (void)setPushDetail:;
- (id)textUtility;
- (void)setActions:;
- (id)actions;
- (void).cxx_destruct;
+ (id)contentAttributes;
@end

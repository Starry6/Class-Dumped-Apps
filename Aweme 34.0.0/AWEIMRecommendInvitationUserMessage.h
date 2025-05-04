@interface AWEIMRecommendInvitationUserMessage : AWEIMMessage
@property (nonatomic) NSString hintText;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)initWithContentDict:;
- (id)contentComponentName;
- (id)hintText;
- (id)getContent;
- (id)getContentDict;
- (void)updateWithMessage:;
- (BOOL)isUserCellType;
- (BOOL)supportRefactorCell;
- (id)supportMessageMenuTypeList;
- (id)getSyncedExtDict;
- (long long)templateType;
+ (id)hintTextWithRecommendUsers:;
+ (id)__hintTextWithRecommendUsers:;
+ (id)identifier;
@end

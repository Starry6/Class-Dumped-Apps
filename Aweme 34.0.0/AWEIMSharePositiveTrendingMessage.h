@interface AWEIMSharePositiveTrendingMessage : AWEIMMessage
@property (nonatomic) NSString updateTime;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)initWithContentDict:;
- (id)contentComponentName;
- (id)getContentDict;
- (BOOL)isUserCellType;
- (BOOL)supportRefactorCell;
- (id)supportMessageMenuTypeList;
- (BOOL)isAllowedCellEdit;
- (BOOL)shouldShowNicknameWithMessageType;
- (BOOL)isAllowedForward;
- (id)updateTime;
- (void).cxx_destruct;
- (id)copyWithZone:;
- (void)setUpdateTime:;
+ (id)identifier;
@end

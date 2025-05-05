@interface AWEIMCloseFriendMomentMessage : AWEIMMessage
@property (nonatomic) AWEIMCloseFriendMomentContent momentContent;
- (id)getContentDict;
- (id)initWithContentDict:;
- (id)momentContent;
- (void)setMomentContent:;
- (void).cxx_destruct;
- (id)copyWithZone:;
+ (Class)viewModelClass;
+ (id)identifier;
@end

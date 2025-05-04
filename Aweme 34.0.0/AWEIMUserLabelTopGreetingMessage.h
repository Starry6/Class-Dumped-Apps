@interface AWEIMUserLabelTopGreetingMessage : AWEIMMessage
@property (nonatomic) AWEUserModel peerUser;
@property (nonatomic) BOOL hasAnyLabel;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)peerUser;
- (void)setPeerUser:;
- (id)initWithContentDict:;
- (id)contentComponentName;
- (BOOL)isUserCellType;
- (BOOL)supportRefactorCell;
- (BOOL)hasAnyLabel;
- (void)setHasAnyLabel:;
- (long long)templateType;
- (void).cxx_destruct;
+ (id)identifier;
@end

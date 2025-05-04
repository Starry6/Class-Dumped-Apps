@interface AWEIMTopGreetingMessage : AWEIMMessage
@property (nonatomic) AWEUserModel peerUser;
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
- (id)supportMessageMenuTypeList;
- (double)bubbleMaxWidth;
- (BOOL)isAllowedCellEdit;
- (BOOL)isSupportForward;
- (BOOL)isAllowedForward;
- (long long)templateType;
- (void).cxx_destruct;
@end

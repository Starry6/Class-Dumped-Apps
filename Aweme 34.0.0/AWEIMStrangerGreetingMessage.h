@interface AWEIMStrangerGreetingMessage : AWEIMGreetingMessage
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)initWithContentDict:;
- (id)contentComponentName;
- (BOOL)isUserCellType;
- (BOOL)supportRefactorCell;
- (long long)templateType;
@end

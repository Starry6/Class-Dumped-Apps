@interface AWEIMMessageInteractiveDataManager : NSObject
@property (nonatomic) AWEIMMessage mesasge;
@property (nonatomic) NSArray doubleLikeUserList;
@property (nonatomic) NSArray readUserList;
- (id)mesasge;
- (id)doubleLikeUserList;
- (id)readUserList;
- (void)setDoubleLikeUserList:;
- (void)setMesasge:;
- (void)setReadUserList:;
- (void).cxx_destruct;
@end

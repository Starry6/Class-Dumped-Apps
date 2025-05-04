@interface AWEIMStrangerBoxChatDataManagerInsertUpdater : NSObject
@property (nonatomic) AWEIMChatModel chatModel;
@property (nonatomic) q index;
@property (nonatomic) Q scene;
@property (nonatomic) NSDictionary ext;
@property (nonatomic) BOOL isTrash;
- (void)setExt:;
- (id)chatModel;
- (void)setChatModel:;
- (void)setIsTrash:;
- (void)setIndex:;
- (long long)index;
- (void)setScene:;
- (id)init;
- (unsigned long long)scene;
- (void).cxx_destruct;
- (BOOL)isTrash;
- (id)ext;
@end

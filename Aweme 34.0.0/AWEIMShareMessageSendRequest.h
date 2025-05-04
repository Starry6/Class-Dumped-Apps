@interface AWEIMShareMessageSendRequest : NSObject
@property (nonatomic) AWEShareContext shareContext;
@property (nonatomic) NSArray shareList;
@property (nonatomic) NSString text;
@property (nonatomic) BOOL createGroup;
- (void)setShareContext:;
- (id)shareContext;
- (BOOL)createGroup;
- (void)setCreateGroup:;
- (void)setText:;
- (id)text;
- (void).cxx_destruct;
- (void)setShareList:;
- (id)shareList;
@end

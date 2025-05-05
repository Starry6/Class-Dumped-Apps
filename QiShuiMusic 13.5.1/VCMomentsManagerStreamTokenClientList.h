@interface VCMomentsManagerStreamTokenClientList : NSObject
@property (nonatomic) <VCMomentsMessenger> messenger;
@property (nonatomic) NSArray clientContextList;
- (void)dealloc;
- (id)newContext;
- (id)messenger;
- (void)removeContext:;
- (id)clientContextList;
- (id)initWithStreamToken:messenger:;
+ (BOOL)isValidContext:;
+ (long long)streamTokenFromClientContext:;
@end

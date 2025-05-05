@interface VCCaptionsManagerStreamTokenClientList : NSObject
@property (nonatomic) <VCCaptionsSource> captionsSource;
@property (nonatomic) NSArray clientContextList;
- (void)dealloc;
- (id)newContext;
- (void)removeContext:;
- (id)initWithStreamToken:captionsSource:;
- (id)captionsSource;
- (id)clientContextList;
+ (BOOL)isValidContext:;
+ (long long)streamTokenFromClientContext:;
@end

@interface ICDispatchAfterBlocks : NSObject
@property (nonatomic) <NSCopying> identifier;
- (void)dealloc;
- (id)identifier;
- (void).cxx_destruct;
- (id)initWithIdentifier:;
- (void)performBlock:;
- (void)setIdentifier:;
- (void)cancelAll;
- (void)dispatchAfter:withBlock:;
@end

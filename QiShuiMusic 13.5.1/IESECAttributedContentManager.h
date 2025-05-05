@interface IESECAttributedContentManager : NSObject
@property (nonatomic) NSPointerArray delegates;
@property (nonatomic) NSMutableArray contents;
@property (nonatomic) BOOL isCompleted;
@property (nonatomic) NSMutableAttributedString content;
- (void)asyncMakeContents;
- (unsigned long long)indexOfDelegate:;
- (void)notifyContentUpdate;
- (void)addDelegate:;
- (id)content;
- (id)delegates;
- (void)setDelegates:;
- (id)contents;
- (void)removeDelegate:;
- (void)setContents:;
- (BOOL)isCompleted;
- (void).cxx_destruct;
- (void)addContent:;
@end

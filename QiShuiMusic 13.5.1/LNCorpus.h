@interface LNCorpus : NSObject
@property (nonatomic) NSArray terms;
@property (nonatomic) <LNCorpusObserver> observer;
@property (nonatomic) NSObject<OS_dispatch_queue> queue;
@property (nonatomic) Q capacity;
- (unsigned long long)capacity;
- (void)removeObserver:;
- (id)init;
- (void)removeAllWithCompletionHandler:;
- (id)initWithContents:;
- (void)setObserver:;
- (void).cxx_destruct;
- (unsigned long long)count;
- (id)queue;
- (id)observer;
- (id)terms;
- (id)initWithContents:capacity:;
- (void)changeWithBlock:completionHandler:;
- (id)getTerms;
- (void)setTerms:;
@end

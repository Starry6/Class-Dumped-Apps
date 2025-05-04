@interface AWEMRSubscribeCounter : NSObject
@property (nonatomic) <NSCopying> identifier;
@property (nonatomic) Q count;
@property (nonatomic) <AWEMRSubscribeCounterObserver> observer;
- (void)setCount:;
- (void)setIdentifier:;
- (unsigned long long)count;
- (id)initWithIdentifier:;
- (id)observer;
- (id)identifier;
- (void)setObserver:;
- (void).cxx_destruct;
- (void)decrease;
- (void)increase;
@end

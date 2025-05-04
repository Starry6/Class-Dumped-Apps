@interface AWEUndertakeFilterBaseCondition : NSObject
@property (nonatomic) <AWEUndertakeStrategyProtocol> strategy;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)bindStrategy:;
- (long long)statusWithData:extraInfo:;
- (void)conditionStatusDidChange:;
- (id)strategy;
- (void).cxx_destruct;
- (void)setStrategy:;
@end

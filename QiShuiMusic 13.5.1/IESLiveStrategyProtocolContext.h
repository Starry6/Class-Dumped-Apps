@interface IESLiveStrategyProtocolContext : NSObject
@property (nonatomic) NSString factorName;
@property (nonatomic) @ inputValue;
@property (nonatomic) <IESLiveStrategyEventDispatcherObserver> observer;
- (void)setFactorName:;
- (void)setObserver:;
- (void).cxx_destruct;
- (id)factorName;
- (id)observer;
- (id)inputValue;
- (void)setInputValue:;
@end

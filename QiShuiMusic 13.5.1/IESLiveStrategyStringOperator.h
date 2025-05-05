@interface IESLiveStrategyStringOperator : NSObject
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (BOOL)excuteChValue:withInputValue:op:;
- (BOOL)isInputValue:equalTo:;
- (BOOL)isInputValue:notEqualTo:;
@end

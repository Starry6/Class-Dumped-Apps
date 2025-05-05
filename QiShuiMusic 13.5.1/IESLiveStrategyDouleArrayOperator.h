@interface IESLiveStrategyDouleArrayOperator : NSObject
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (BOOL)allNot;
- (BOOL)excuteChValue:withInputValue:op:;
- (BOOL)isInputValue:contains:;
- (BOOL)isInputValue:notContains:;
- (BOOL)isInputValue:notRangeIn:;
- (BOOL)isInputValue:rangeIn:;
- (BOOL)all;
@end

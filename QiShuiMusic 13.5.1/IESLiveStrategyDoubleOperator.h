@interface IESLiveStrategyDoubleOperator : NSObject
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (BOOL)allNot;
- (BOOL)excuteChValue:withInputValue:op:;
- (BOOL)isInputValue:GreaterOrEqualTo:;
- (BOOL)isInputValue:GreaterThan:;
- (BOOL)isInputValue:LessThan:;
- (BOOL)isInputValue:LesserOrEqualTo:;
- (BOOL)isInputValue:equalTo:;
- (BOOL)isInputValue:notEqualTo:;
- (BOOL)all;
@end

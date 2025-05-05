@interface IESLiveStrategyBooleanOperator : NSObject
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (BOOL)allNot;
- (BOOL)excuteChValue:withInputValue:op:;
- (BOOL)isInputValue:equalTo:;
- (BOOL)isInputValue:notEqualTo:;
- (BOOL)all;
@end

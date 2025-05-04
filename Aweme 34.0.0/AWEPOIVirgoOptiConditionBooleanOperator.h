@interface AWEPOIVirgoOptiConditionBooleanOperator : NSObject
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (BOOL)isLocalValue:equalTo:;
- (BOOL)isLocalValue:notEqualTo:;
- (BOOL)executeConditionValue:withLocalValue:op:;
@end

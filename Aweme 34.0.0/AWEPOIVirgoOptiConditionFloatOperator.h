@interface AWEPOIVirgoOptiConditionFloatOperator : NSObject
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (BOOL)isLocalValue:equalTo:;
- (BOOL)isLocalValue:notEqualTo:;
- (BOOL)executeConditionValue:withLocalValue:op:;
- (BOOL)isLocalValue:greaterThan:;
- (BOOL)isLocalValue:lessThan:;
- (BOOL)isLocalValue:greaterOrEqualTo:;
- (BOOL)isLocalValue:lesserOrEqualTo:;
- (BOOL)isLocalValue:belongTo:;
- (BOOL)isLocalValue:notBelongTo:;
- (BOOL)checkIsNumberArray:;
@end

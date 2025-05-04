@interface AWEPOIVirgoOptiConditionIntArrayOperator : NSObject
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (BOOL)executeConditionValue:withLocalValue:op:;
- (BOOL)isLocalValue:belongTo:;
- (BOOL)isLocalValue:notBelongTo:;
- (BOOL)isLocalValue:contains:;
- (BOOL)isLocalValue:notContains:;
- (BOOL)isLocalValue:intersection:;
- (BOOL)checkIsNumberArray:;
- (BOOL)isArray:aSubsetOfArray:;
@end

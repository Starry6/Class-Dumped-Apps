@interface IESLatchRuleConfigResolver : NSObject
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)resolveConfig:bag:withEvent:;
- (id)resolveItem:;
- (id)resolveQuery:;
- (id)resolveRule:bag:withEvent:;
@end

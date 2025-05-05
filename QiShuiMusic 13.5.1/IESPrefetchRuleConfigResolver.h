@interface IESPrefetchRuleConfigResolver : NSObject
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)resolveConfig:;
- (id)resolveItem:;
- (id)resolveQuery:;
- (id)resolveRegexRule:forName:;
- (id)resolveRule:forName:;
@end

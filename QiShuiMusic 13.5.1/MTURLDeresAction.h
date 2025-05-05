@interface MTURLDeresAction : MTTreatmentAction
@property (nonatomic) NSString scope;
@property (nonatomic) NSDictionary allowedParams;
- (void)setScope:;
- (id)scope;
- (void).cxx_destruct;
- (id)performAction:context:;
- (id)allowedQueryItemsFromItems:;
- (id)initWithField:configDictionary:;
- (id)allowedParams;
- (void)setAllowedParams:;
@end

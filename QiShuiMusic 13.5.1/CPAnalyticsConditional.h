@interface CPAnalyticsConditional : NSObject
@property (nonatomic) NSString property;
@property (nonatomic) NSPredicate predicate;
- (id)property;
- (id)initWithConfig:;
- (id)_validateAndParseConfig:forKey:;
- (id)predicate;
- (void).cxx_destruct;
@end

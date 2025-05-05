@interface CNUICoreContactAggregateValueFilter : NSObject
@property (nonatomic) NSArray valueFilters;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)init;
- (void).cxx_destruct;
- (id)description;
- (id)initWithValueFilters:;
- (id)contactByFilteringOutPropertyValueOfContact:;
- (void)filterPropertyValuesFromContact:;
- (id)valueFilters;
@end

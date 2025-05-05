@interface CNUICoreContactRelationshipsFilter : NSObject
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)description;
- (id)contactByFilteringOutPropertyValueOfContact:;
- (void)filterPropertyValuesFromContact:;
@end

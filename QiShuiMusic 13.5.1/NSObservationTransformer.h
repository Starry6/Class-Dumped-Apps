@interface NSObservationTransformer : NSObservationSource
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
+ (id)mapValuesWithBlock:;
+ (id)mapErrorsWithBlock:;
@end

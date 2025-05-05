@interface SAStockSearchCompleted : SABaseCommand
@property (nonatomic) NSArray stockReferences;
@property (nonatomic) NSString aceId;
@property (nonatomic) NSString refId;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)groupIdentifier;
- (BOOL)requiresResponse;
- (id)encodedClassName;
- (id)stockReferences;
- (void)setStockReferences:;
+ (id)searchCompleted;
+ (id)searchCompletedWithDictionary:context:;
@end

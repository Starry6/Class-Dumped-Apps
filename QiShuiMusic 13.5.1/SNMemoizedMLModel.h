@interface SNMemoizedMLModel : NSObject
@property (nonatomic) MLModelDescription modelDescription;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)init;
- (id)predictionFromFeatures:options:error:;
- (id)modelDescription;
- (void).cxx_destruct;
- (id).cxx_construct;
- (id)initWithModelDescription:parameterDictionary:error:;
+ (id)new;
@end

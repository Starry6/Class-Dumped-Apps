@interface ToygerBaseModel : NSObject
- (void)copyFromModel:;
- (id)idFromObject:;
- (id)propertyOfClass:;
- (id)dictionary;
- (id)init;
- (void)reset:;
+ (id)defaultModel;
+ (id)model:;
@end

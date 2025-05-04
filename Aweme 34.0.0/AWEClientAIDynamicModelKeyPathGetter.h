@interface AWEClientAIDynamicModelKeyPathGetter : NSObject
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)getJSONValueFromModel:withJSONKeyPath:useCache:;
- (id)getJSONValueFromModel:withJSONKeyPath:;
- (id)init;
+ (id)getValueFromModel:withJSONKeyPath:;
+ (id)getValueFromObject:withJSONKey:;
+ (id)getValueFromAWERootModel:withJSONKey:;
+ (id)getValueFromMTLObject:withJSONKey:;
+ (id)getPropertyKeyWithJSONKey:JSONKeyPathsByPropertyKeyProvider:JSONKeyPathsByPropertyKeyGetter:;
+ (id)getValueFromObject:withPropertyKey:;
+ (id)sharedInstance;
@end

@interface CNMultiValueUpdate : NSObject
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
@property (nonatomic) BOOL ignoreIdentifiers;
- (void)applyToMutableMultiValue:withIdentifierMap:;
- (BOOL)ignoreIdentifiers;
- (void)setIgnoreIdentifiers:;
- (BOOL)applyToABPerson:abmultivalue:propertyDescription:isUnified:logger:error:;
- (long long)multiValueIndexForValue:inMultiValue:identifier:;
+ (id)addValue:;
+ (id)removeValue:;
+ (id)replaceValue:withValue:;
+ (id)reorderValues:;
@end

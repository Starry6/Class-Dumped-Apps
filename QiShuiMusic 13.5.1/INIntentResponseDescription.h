@interface INIntentResponseDescription : NSObject
@property (nonatomic) NSString name;
@property (nonatomic) # facadeClass;
@property (nonatomic) # dataClass;
@property (nonatomic) NSString type;
@property (nonatomic) BOOL isPrivate;
@property (nonatomic) NSDictionary slotsByName;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (BOOL)isPrivate;
- (Class)dataClass;
- (id)slotsByName;
- (unsigned long long)hash;
- (Class)facadeClass;
- (id)type;
- (void).cxx_destruct;
- (id)name;
- (BOOL)isEqual:;
- (id)copyWithZone:;
- (id)initWithName:facadeClass:dataClass:type:isPrivate:slotsByName:;
@end

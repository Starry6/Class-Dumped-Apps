@interface VCSEntity : NSObject
@property (nonatomic) Q entityType;
@property (nonatomic) VCSEntity parent;
@property (nonatomic) NSArray children;
@property (nonatomic) NSArray properties;
@property (nonatomic) NSArray alarms;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)setProperty:;
- (void)setParent:;
- (id)init;
- (id)alarms;
- (id)children;
- (id)properties;
- (void).cxx_destruct;
- (unsigned long long)entityType;
- (void)removePropertyForName:;
- (id)description;
- (id)propertyForName:;
- (id)parent;
- (BOOL)hasPropertyWithName:;
- (id)dictify;
- (BOOL)isValidStatus:;
- (void)addChildEntity:;
+ (id)stringForType:;
@end

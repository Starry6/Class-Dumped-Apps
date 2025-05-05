@interface STCoreOrganization : NSManagedObject
@property (nonatomic) NSSet enqueuedPayloads;
@property (nonatomic) NSSet pendingPayloads;
@property (nonatomic) NSSet recentPayloads;
@property (nonatomic) NSSet blueprints;
+ (Class)internalClassForSerializableClassName:;
@end

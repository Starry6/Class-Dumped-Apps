@interface STCoreDowntimeOverride : NSManagedObject
@property (nonatomic) q type;
@property (nonatomic) q state;
@property (nonatomic) NSDate creationDate;
@property (nonatomic) NSString calendarIdentifier;
@property (nonatomic) NSDate endDate;
@property (nonatomic) BOOL isTombstoned;
@property (nonatomic) STBlueprint downtime;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
@property (nonatomic) <STSerializableManagedObject> syncableRootObject;
- (void)setState:;
- (BOOL)updateWithDictionaryRepresentation:;
- (void)setType:;
- (long long)type;
- (id)syncableRootObject;
- (long long)state;
- (id)dictionaryRepresentation;
@end

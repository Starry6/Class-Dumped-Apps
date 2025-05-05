@interface NSCKEvent : NSManagedObject
@property (nonatomic) NSUUID eventIdentifier;
@property (nonatomic) q cloudKitEventType;
@property (nonatomic) NSDate startedAt;
@property (nonatomic) NSDate endedAt;
@property (nonatomic) BOOL succeeded;
@property (nonatomic) NSString errorDomain;
@property (nonatomic) q errorCode;
@property (nonatomic) q countAffectedObjects;
@property (nonatomic) q countFinishedObjects;
+ (id)entityPath;
@end

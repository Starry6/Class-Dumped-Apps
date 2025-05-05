@interface SFAppDomainUsage : NSManagedObject
@property (nonatomic) NSInteger effectiveUserId;
@property (nonatomic) NSString bundleName;
@property (nonatomic) NSString domain;
@property (nonatomic) NSString domainOwner;
@property (nonatomic) s domainType;
@property (nonatomic) s domainClassification;
@property (nonatomic) s contextVerificationType;
@property (nonatomic) NSString context;
@property (nonatomic) NSDate firstTimeStamp;
@property (nonatomic) NSNumber kind;
@property (nonatomic) NSNumber hits;
@property (nonatomic) NSDate timeStamp;
@property (nonatomic) SFApp hasApp;
+ (id)entityName;
+ (id)fetchRequest;
@end

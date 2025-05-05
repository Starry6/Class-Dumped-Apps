@interface CNContactImageManagedObject : NSManagedObject
@property (nonatomic) NSUUID identifier;
@property (nonatomic) NSString contactIdentifier;
@property (nonatomic) NSData imageData;
@property (nonatomic) NSDate lastUsedDate;
@property (nonatomic) NSString cropRectString;
@property (nonatomic) NSString displayString;
@property (nonatomic) NSNumber source;
@property (nonatomic) NSString sourceIdentifier;
@property (nonatomic) NSString variant;
@property (nonatomic) NSData poseConfigurationData;
- (void)updateWithContactImage:;
- (void)setupWithContactImage:contactIdentifier:;
- (id)cropRectStringFromCGRect:;
+ (id)managedObjectToContactImageTransform;
@end

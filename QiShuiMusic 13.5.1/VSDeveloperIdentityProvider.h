@interface VSDeveloperIdentityProvider : NSManagedObject
@property (nonatomic) NSString uniqueID;
@property (nonatomic) NSString providerID;
@property (nonatomic) NSString nameForSorting;
@property (nonatomic) NSString authenticationURL;
@property (nonatomic) NSString certificateURL;
@property (nonatomic) NSArray authenticationSchemes;
@end

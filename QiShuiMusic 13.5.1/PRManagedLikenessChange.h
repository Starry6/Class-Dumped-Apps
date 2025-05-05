@interface PRManagedLikenessChange : NSManagedObject
@property (nonatomic) NSString type;
@property (nonatomic) NSString identifier;
@property (nonatomic) NSNumber changedVersion;
@property (nonatomic) NSString changedID;
@property (nonatomic) NSString changedProperties;
@property (nonatomic) NSDate timestamp;
@end

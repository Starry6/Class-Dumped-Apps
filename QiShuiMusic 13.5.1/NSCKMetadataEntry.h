@interface NSCKMetadataEntry : NSManagedObject
@property (nonatomic) NSNumber boolValueNum;
@property (nonatomic) NSString key;
@property (nonatomic) NSString stringValue;
@property (nonatomic) BOOL boolValue;
@property (nonatomic) NSObject<NSSecureCoding> transformedValue;
@property (nonatomic) NSNumber integerValue;
@property (nonatomic) NSDate dateValue;
- (BOOL)boolValue;
- (void)setBoolValue:;
+ (id)entityPath;
@end

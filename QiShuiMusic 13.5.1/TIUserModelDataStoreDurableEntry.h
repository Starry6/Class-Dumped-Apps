@interface TIUserModelDataStoreDurableEntry : NSObject
@property (nonatomic) NSDate creationDate;
@property (nonatomic) NSDate lastUpdateDate;
@property (nonatomic) NSString key;
@property (nonatomic) NSNumber value;
- (id)lastUpdateDate;
- (id)key;
- (void).cxx_destruct;
- (id)value;
- (id)creationDate;
- (id)initWithCreationDate:withLastUpdateDate:withKey:withValue:;
@end

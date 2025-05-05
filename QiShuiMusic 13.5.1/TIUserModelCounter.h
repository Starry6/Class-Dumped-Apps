@interface TIUserModelCounter : NSObject
@property (nonatomic) NSString name;
@property (nonatomic) NSNumber count;
@property (nonatomic) NSDate creationDate;
@property (nonatomic) NSDate lastUpdateDate;
- (void)add:;
- (id)lastUpdateDate;
- (id)initWithName:;
- (void).cxx_destruct;
- (id)name;
- (id)count;
- (id)creationDate;
- (id)initWithName:initialCount:creationDate:lastUpdateDate:;
- (void)doPersist:forDate:;
@end

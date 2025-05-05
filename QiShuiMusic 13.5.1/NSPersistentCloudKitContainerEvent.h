@interface NSPersistentCloudKitContainerEvent : NSObject
@property (nonatomic) NSUUID identifier;
@property (nonatomic) NSString storeIdentifier;
@property (nonatomic) q type;
@property (nonatomic) NSDate startDate;
@property (nonatomic) NSDate endDate;
@property (nonatomic) BOOL succeeded;
@property (nonatomic) NSError error;
- (id)storeIdentifier;
- (id)startDate;
- (void)dealloc;
- (id)identifier;
- (BOOL)succeeded;
- (id)error;
- (id)endDate;
- (long long)type;
- (id)description;
- (id)initWithCKEvent:;
- (BOOL)isEqual:;
- (id)copyWithZone:;
+ (id)eventTypeString:;
@end

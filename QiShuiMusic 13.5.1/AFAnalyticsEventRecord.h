@interface AFAnalyticsEventRecord : NSObject
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
@property (nonatomic) NSString recordId;
@property (nonatomic) AFAnalyticsEvent event;
@property (nonatomic) NSString streamUID;
@property (nonatomic) NSDate dateCreated;
@property (nonatomic) NSString speechId;
- (id)event;
- (id)recordId;
- (id)initWithEvent:streamUID:dateCreated:speechId:recordId:;
- (id)initWithCoder:;
- (void)encodeWithCoder:;
- (id)speechId;
- (id)dateCreated;
- (id)initWithEvent:streamUID:dateCreated:speechId:;
- (void).cxx_destruct;
- (id)streamUID;
- (void)siriCoreSQLiteRecord_enumerateColumnNamesAndValuesUsingBlock:;
+ (BOOL)supportsSecureCoding;
@end

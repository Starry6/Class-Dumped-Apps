@interface IMCollaborationNoticeTransmission : NSObject
@property (nonatomic) NSString guidString;
@property (nonatomic) NSData eventData;
@property (nonatomic) q eventType;
@property (nonatomic) NSDate date;
- (long long)eventType;
- (id)initWithCoder:;
- (id)date;
- (void)encodeWithCoder:;
- (void).cxx_destruct;
- (id)description;
- (id)eventData;
- (id)guidString;
- (id)initWithEventData:eventType:guidString:date:;
+ (BOOL)supportsSecureCoding;
@end

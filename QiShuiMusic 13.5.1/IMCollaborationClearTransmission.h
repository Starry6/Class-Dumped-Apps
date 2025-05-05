@interface IMCollaborationClearTransmission : NSObject
@property (nonatomic) NSString collaborationId;
@property (nonatomic) NSDate date;
@property (nonatomic) NSString guidString;
- (id)initWithCoder:;
- (id)date;
- (void)encodeWithCoder:;
- (void).cxx_destruct;
- (id)description;
- (id)guidString;
- (id)collaborationId;
- (id)initWithCollaborationId:date:guidString:;
+ (BOOL)supportsSecureCoding;
@end

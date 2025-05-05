@interface PPExtractionSet : NSObject
@property (nonatomic) NSArray namedEntityRecords;
@property (nonatomic) NSArray topicRecords;
- (BOOL)isEmpty;
- (id)initWithCoder:;
- (void)encodeWithCoder:;
- (id)merge:;
- (void).cxx_destruct;
- (id)copyWithZone:;
- (id)initWithNamedEntityRecords:topicRecords:;
- (id)namedEntityRecords;
- (id)topicRecords;
+ (BOOL)supportsSecureCoding;
@end

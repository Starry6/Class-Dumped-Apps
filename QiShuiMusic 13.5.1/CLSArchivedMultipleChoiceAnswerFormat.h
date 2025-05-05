@interface CLSArchivedMultipleChoiceAnswerFormat : CLSArchivedAnswerFormat
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
@property (nonatomic) q type;
@property (nonatomic) NSArray archivedAnswerChoiceItems;
- (void)setType:;
- (id)initWithCoder:;
- (void)encodeWithCoder:;
- (long long)type;
- (id)_init;
- (id)initWithType:;
- (void)addAnswerItem:;
- (id)archivedAnswerChoiceItems;
+ (BOOL)supportsSecureCoding;
+ (id)relations;
@end

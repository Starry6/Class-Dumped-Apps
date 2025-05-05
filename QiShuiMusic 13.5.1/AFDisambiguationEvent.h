@interface AFDisambiguationEvent : NSObject
@property (nonatomic) NSString itemIdentifier;
@property (nonatomic) q selectionType;
@property (nonatomic) NSDate date;
- (void)setItemIdentifier:;
- (id)itemIdentifier;
- (id)initWithCoder:;
- (id)date;
- (void)encodeWithCoder:;
- (void).cxx_destruct;
- (void)setDate:;
- (id)description;
- (void)setSelectionType:;
- (long long)selectionType;
+ (BOOL)supportsSecureCoding;
@end

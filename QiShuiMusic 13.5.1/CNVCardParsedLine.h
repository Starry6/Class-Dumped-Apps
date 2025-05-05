@interface CNVCardParsedLine : NSObject
@property (nonatomic) NSString name;
@property (nonatomic) @ value;
@property (nonatomic) NSArray parameters;
@property (nonatomic) BOOL isPrimary;
@property (nonatomic) NSString grouping;
- (BOOL)isPrimary;
- (id)initWithName:;
- (id)parameters;
- (void)setValue:;
- (void)setGrouping:;
- (void).cxx_destruct;
- (id)description;
- (id)value;
- (void)setParameters:;
- (id)name;
- (id)grouping;
- (void)setIsPrimary:;
@end
